#include <iostream>

int main()
{
    float tempCelsius, tempFerenheit, tranf;

    std::cout << "informe a temperatura em graus Celsius: ";
    std::cin >> tempCelsius;

    tranf = tempFerenheit = (5 * (tempCelsius - 32) / 9);

    std::cout << "Graus em Farenheit: " << tranf << std::endl;
}

/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
*/
