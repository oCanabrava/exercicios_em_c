/*
	Name: Raiz
	Author: Otto Canabrava  |  1874
	GITHUB: /oCanabrava
	Date: 18/08/17 12:50
	Description: Leia um numero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz
	quadrada do numero. Se o n�mero for negativo, mostre uma mensagem dizendo que o numero � inv�lido.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main () {
	
	setlocale(LC_ALL, "");
	
	float num, raiz;
	
	printf("Digite um n�mero: \n");
	scanf("%f", &num);
	
	if (num > 0) {
		raiz = sqrt(num);
		printf("A raiz quadrada de %f � %f \n", num, raiz);
	}
	
	else {
		printf("N�mero inv�lido!");
	}
	

}
