#include <iostream>

int main()
{
	std::cout << "\t        ++++++ MEDIA ++++++\n\n";


	float nota1, nota2, nota3, nota4,media;

	std::cout << "Digite uma nota: ";
	std::cin >> nota1;

	std::cout << "Digite uma nota: ";
	std::cin >> nota2;

	std::cout << "Digite uma nota: ";
	std::cin >> nota3;

	std::cout << "Digite uma nota: ";
	std::cin >> nota4;

	media = (nota1 + nota2 + nota3 + nota4) / 4; 

	std::cout << "Esta foi a media: " << media << std::endl;

	return 0;
}

/*
Exercicio 004
Faça um Programa que peça as 4 notas bimestrais e mostre a média
*/