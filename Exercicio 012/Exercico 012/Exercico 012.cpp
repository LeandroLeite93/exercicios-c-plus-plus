#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura, peso;

    std::cout << "digite sua altura: ";
    std::cin >> altura;

    peso = (72.7 * altura) - 58;

    std::cout << "seu peso ideal é: " << peso << std::endl;


}

/*
Tendo como dados de entrada a altura de uma pessoa, 
construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
*/
