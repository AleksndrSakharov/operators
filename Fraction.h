#pragma once
#include <cstdint>
#include <iostream>

class Fraction{
private:
    int32_t _numerator;
    uint32_t _denominator;

public:
    Fraction();


    Fraction(int32_t numerator, uint32_t denominator){

        std::cout << "Construct with parametrs" << std::endl;
        std::cout << this << std::endl;
        _numerator = numerator;
        if (denominator == 0)
            throw "Error! Denominator is 0!";
        
        _denominator = denominator;
    }

    Fraction(const Fraction& fraction);

    Fraction& operator=(const Fraction& tmp){
        std::cout << "Call operator = " << std::endl;
        _numerator = tmp._numerator;
        _denominator = tmp._denominator;
        return *this;
    }

    Fraction operator+(const Fraction& fraction)const{
        int32_t new_numerator = fraction._numerator * _denominator 
                                + _numerator * fraction._denominator; 
        uint32_t new_denominator = _denominator * fraction._denominator;
        Fraction result = Fraction(new_numerator, new_denominator);
        std::cout << &result << std::endl;
        return result;
    }
    Fraction operator-(const Fraction& fraction)const{
        int32_t new_numerator = fraction._numerator * _denominator 
                                - _numerator * fraction._denominator; 
        uint32_t new_denominator = _denominator * fraction._denominator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }
    Fraction operator*(const Fraction& fraction)const{
        int32_t new_numerator = fraction._numerator * _numerator; 
        uint32_t new_denominator = _denominator * fraction._denominator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }

    Fraction operator/(const Fraction& fraction)const{
        int32_t new_numerator = fraction._denominator * _numerator; 
        uint32_t new_denominator = _denominator * fraction._numerator;
        
        Fraction result = Fraction(new_numerator, new_denominator);
        return result;
    }




    bool IsValid;

    void SetNumerator(int32_t new_numerator);
    inline int32_t GetNumerator() { return _numerator; }

    void SetDenominator(uint32_t new_denominator);
    inline uint32_t GetDenominator() { return _denominator; }

    inline double GetDouble() { return _numerator / _denominator; }

    inline void Print(){
        std::cout << _numerator << "/" << _denominator << std::endl;
    }

    friend std::ostream& operator<<(std::ostream &os, const Fraction &fraction)
    {
        return os << fraction._numerator << "/" << fraction._denominator << std::endl;
    }

    ~Fraction(){
        std::cout << "Call destructor" << std::endl;
        std::cout << this << std::endl;
    }

};