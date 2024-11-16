#include <iostream>

int main()
{
    float altura, pesoH, pesoM;

    std::cout << "digite sua altura (Exemplo.. 1.75): ";
    std::cin >> altura;
    
    pesoH = (72.7 * altura) - 58;
    pesoM = (62.1 * altura) - 44.7;

    std::cout << "peso ideal do Homem: " << pesoH << std::endl;
    std::cout << "peso ideal da Mulher: " << pesoM << std::endl;

    
}

/*
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, 
utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7
*/
