#include <iostream>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float ValorHora, ValorTrabalhas, Resultado;

	std::cout << "Quando voc� ganha por hora?: ";
	std::cin >> ValorHora;

	std::cout << "Quando horas voc� trabalha por dia?: "; 
	std::cin >> ValorTrabalhas;

	Resultado = ValorHora * ValorTrabalhas;

	std::cout << "Total do seu Salario no mes �: " << Resultado << std::endl;

	return 0;
}

/*
Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
Calcule e mostre o total do seu sal�rio no referido m�s
*/