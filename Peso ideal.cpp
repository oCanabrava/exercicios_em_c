/*
	Name: Peso ideal
	Author: Otto Canabrava  |  1874
	GITHUB: /oCanabrava
	Date:
	Description: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, 
	utilizando as seguintes formulas (onde h corresponde à altura): 
	• Homens: (72.7 * h) - 58
	• Mulheres: (62.1 * h) - 44.7
*/

#include <stdio.h>
#include <locale.h>

main () {
	
	setlocale(LC_ALL, "");
	
	char sexo;
	float alt, pesoid;
	
	printf("Selecione o sexo (digite f ou m): \n");
	scanf("%c", &sexo);
	
	printf("Digite a altura: \n");
	scanf("%f", &alt);
	
	if (sexo == 'm') {
		pesoid = (72.7 * alt) - 58;
		printf("Para alguém do sexo masculino com %f de altura, o peso ideal é %f kg", alt, pesoid); 
	}
	
	else if (sexo == 'f') {
		pesoid = (62.1 * alt) - 44.7;
		printf("Para alguém do sexo feminino com %f de altura, o peso ideal é %f kg", alt, pesoid);
	}
	
	else 
	printf("Opção inválida!");
}
