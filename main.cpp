#include "Fraction.h"
#include "Complex.h"

double operator+(int number, const Fraction& fraction){
    int32_t new_num = number * fraction.GetDenominator() + fraction.GetNumerator();
    return static_cast<double> (new_num)/ fraction.GetDenominator();
}

int main(){
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);
    Fraction res1 = fraction1 + 5;
    double res2 = 5 + fraction1;
    double res3 = fraction1 + 5;

    Complex x1 = Complex(fraction1, fraction2);
    Complex x2 = Complex(x1);
    x2 = x1;
    std::cout << x1 << std::endl;
    // Fraction* fraction3 = new Fraction(2, 3); //Объект класса
    // Fraction* arr_fract = new Fraction[10];
    // for (int i=0; i < 10; i++){
    //     arr_fract[i] = Fraction(1, 2);
    // }
    // delete [] arr_fract;

    // std::cout << fraction1 << std::endl;
    // std::cout << fraction2 << std::endl;

    // Fraction fraction_res = fraction1 + fraction2;
    // //std::cout << &fraction_res << std::endl;
    // //fraction_res = fraction1 + fraction2;
    // std::cout << &fraction_res << std::endl;

    // std::cout << fraction_res << std::endl;

    return 0;
}