#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3;
	float media = { 0.0 };

	cout << "digite a primeira nota: ";
	cin >> nota1;

	cout << "digite a segunda nota: ";
	cin >> nota2;

	cout << "digite a terceira nota: ";
	cin >> nota3;

	media = (nota1 + nota2 + nota3) / 3;

	if (media >= 10)
	{
		cout << "parabéns, aprovado! " << media << endl;
	}
	else if (media < 6) 
	{
		cout << "você foi reprovado! " << media << endl;
	}

	cout << "numeros digitados: " << nota1 << " " << nota2 << " " << nota3 << " " << endl;

	return 0;
}

/*
crie um programa em c++ que receba do usuario tres valores do tipo real e coloque na tela os tres
valores.

*/