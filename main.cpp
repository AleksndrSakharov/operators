#include "Fraction.h"

int main(){
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(1, 2);

    Fraction* fraction3 = new Fraction(2, 3); //Объект класса
    Fraction* arr_fract = new Fraction[10];
    for (int i=0; i < 10; i++){
        arr_fract[i] = Fraction(1, 2);
    }
    delete [] arr_fract;

    // std::cout << fraction1 << std::endl;
    // std::cout << fraction2 << std::endl;

    // Fraction fraction_res = fraction1 + fraction2;
    // //std::cout << &fraction_res << std::endl;
    // //fraction_res = fraction1 + fraction2;
    // std::cout << &fraction_res << std::endl;

    // std::cout << fraction_res << std::endl;

    return 0;
}