#include <iostream>

int main()
{
   setlocale(LC_ALL, "portuguese");
   float Fahrenheit,Celsius;

   std::cout<<"informe a temperatura de farenheit: ";
   std::cin>> Fahrenheit;

   Celsius = (5 * (Fahrenheit - 32) / 9);

   std::cout<<"A temperatura em Celsuis é : " << Celsius << std::endl;
}

/*Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura
 em graus Celsius. C = (5 * (F-32) / 9).
digite 113 e o resultado 45. 
*/
