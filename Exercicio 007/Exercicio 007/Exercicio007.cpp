#include <iostream>

int main()
{
	float lado;
	float area;

	std::cout << "Informe o comprimento do lado do quadrado: ";
	std::cin >> lado;

	area = lado * lado;
	std::cout << "A area do quadrado e:" << area << std::endl;

	return 0;
}

/*
Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.
*/