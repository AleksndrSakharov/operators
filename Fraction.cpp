#include "Fraction.h"

void Fraction::SetDenominator(uint32_t new_denominator){
    if (new_denominator != 0)
        _denominator = new_denominator;
}

void Fraction::SetNumerator(int32_t new_numerator){
    _numerator = new_numerator;
}

Fraction::Fraction(){
    // std::cout << "Construct default" << std::endl;
    _numerator = 0;
    _denominator = 1;
}

Fraction::Fraction(const Fraction& fraction) {
    // std::cout << "Construct copy" << std::endl;
    _numerator = fraction._numerator;
    _denominator = fraction._denominator;
}