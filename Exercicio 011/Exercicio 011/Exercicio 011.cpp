#include <iostream>

int main()
{
    int n1, n2;
    float n3,a,b,c;

    std::cout << "digite o primeiro numero: ";
    std::cin >> n1;
    std::cout << "digite o segundo numero: ";
    std::cin >> n2;
    std::cout << "digite o terceiro numero: ";
    std::cin >> n3;

    a = (2 * n1) * (n2 / 2);
    b = (3 * n3) + n3;
    c = n3 * n3 * n3;

    std::cout << "primeiro produto: " << a << std::endl;
    std::cout << "segundo produto: " << b << std::endl;
    std::cout << "terceiro produto: " << c << std::endl;
}

/*
Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro
com metade do segundo. a soma do triplo do primeiro com o terceiro.o terceiro elevado ao cubo.
*/
