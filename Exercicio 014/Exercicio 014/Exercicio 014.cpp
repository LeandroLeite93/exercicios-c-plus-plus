#include <iostream>

int main()
{
	float pesolimite = 0;
	float peso = 0;
	float excesso = 0;
	float multa = 0;

	std::cout<<"Ola Seu Joao! Quantos quilos de peixe o senhor pescou hoje?\n";
	std::cin>> peso;


	if (peso > pesolimite) {
		excesso = peso - pesolimite;
		multa = excesso * 4.00;
		std::cout <<"\nVai precisar pagar multa Seu Joao!! O valor da multa é de RS\n" << multa << std::endl;
	}
	else {
		std::cout << "\nNão é necessário pagar multa Seu João! O peixe pesa apenas kg!\n" << peso << std::endl;
	}

	return 0;
}

/*
João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo 
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que 
João deverá pagar. Imprima os dados do programa com as mensagens adequadas.

*/
