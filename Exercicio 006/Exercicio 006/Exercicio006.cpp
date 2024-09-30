#include <iostream>

int main()
{
	double raio, area, calc;

	std::cout << "qual eh o raio da circunferencia: ";
	std::cin >> raio;

	std::cout << "digite a area: ";
	std::cin >> area;
    
	calc = raio * area;

	std::cout << "A area da circunferencia eh: " << calc << std::endl;


	return 0;
}