#include <iostream>

int main()
{
    float metro, centimetro;

    std::cout << "digite os metros pra conversao: ";
    std::cin >> metro;

    centimetro = metro * 100;

    std::cout << "numero convertido para centimetro: " << centimetro << std::endl;

    system("PAUSE");

    return 0;
}

/*
Exercicio 005
Faça um Programa que converta metros para centímetros.
*/