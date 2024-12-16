#include<iostream>
#include"mytemperature.h"

int main()
{
    std::cout << "Celsius	Fahrenheit | Fahrenheit    Celsius" << std::endl;
    std::cout << "40.0    " << celsius_to_fah(40.0) << "    |    " << " 120.0    " << fahrenheit_to_cels(120.0) << std::endl;
    std::cout << "39.0    " << celsius_to_fah(39.0) << "    |    " << " 110.0    " << fahrenheit_to_cels(110.0) << std::endl;
     std::cout << ".....    " << "....." << "|    " << " .....    " << "....." << std::endl;
    std::cout << "31.0    " << celsius_to_fah(31.0) << "    |    " << " 30.0    " << fahrenheit_to_cels(30.0) << std::endl;
}