#pragma once
#include "Fraction.h"
class Complex{
private:
    Fraction _re;
    Fraction _im;
public:
    Complex(){
        _re = Fraction(0, 1);
        _im = Fraction(0, 1);
    }
    Complex(Fraction re, Fraction im){
        _re = re;
        _im = im;
    }

    Complex operator+(const Complex &complex)const{
        Fraction re = complex._re + _re;
        Fraction im = complex._im + _im;
        Complex result = Complex(re, im);
        return result;
    }

    Complex operator-(const Complex &complex)const{
        Fraction re = _re - complex._re;
        Fraction im = _im - complex._im;
        Complex result = Complex(re, im);
        return result;
    }

    Complex operator*(const Complex &complex)const{
        Fraction re = _re * complex._re - _im * complex._im;
        Fraction im = _re * complex._im + complex._re * _im;
        Complex result = Complex(re, im);
        return result;
    }

    Complex operator/(const Complex &complex)const{
        Fraction new_re = (_re * complex._re + _im * complex._im) / (complex._im * complex._im + complex._re * complex._re);
    Fraction new_im = (_im * complex._re - complex._im * _re) / (complex._im * complex._im + complex._re * complex._re);
    return Complex (new_re, new_im) ;
    }


    friend std::ostream& operator<<(std::ostream &os, const Complex &complex)
    {
        os << complex._re;
        if (complex._im > 0) os << "+";
        os << complex._im << " * i";
        return os;
    }
};