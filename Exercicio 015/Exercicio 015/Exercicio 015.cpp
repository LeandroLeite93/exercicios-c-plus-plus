#include <iostream>

int main()
{
    float salarioBruto, salarioLiquido, ir, inss, sindicato, quantoGanha, horasTrabalahadas;

    std::cout << "\nQuanto ganha: ";
    std::cin >> quantoGanha;

    std::cout << "\nHoras trabalhadas por mes: ";
    std::cin >> horasTrabalahadas;

    salarioBruto = quantoGanha * horasTrabalahadas;
    ir = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;
    //salarioLiquido = salarioBruto - ir - inss - sindicato;


    std::cout << "Salario bruto: " << salarioBruto << std::endl;
    std::cout << "IR: " << ir << std::endl;
    std::cout << "INSS: " << inss << std::endl;
    std::cout << "Sindicato: " << sindicato << std::endl;
    std::cout << "Salario Liquido: " << salarioBruto - ir - inss - sindicato << std::endl;

}
/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou
ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.
*/
