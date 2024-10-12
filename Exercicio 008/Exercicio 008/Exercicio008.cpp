#include <iostream>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float ValorHora, ValorTrabalhas, Resultado;

	std::cout << "Quando você ganha por hora?: ";
	std::cin >> ValorHora;

	std::cout << "Quando horas você trabalha por dia?: "; 
	std::cin >> ValorTrabalhas;

	Resultado = ValorHora * ValorTrabalhas;

	std::cout << "Total do seu Salario no mes é: " << Resultado << std::endl;

	return 0;
}

/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês
*/