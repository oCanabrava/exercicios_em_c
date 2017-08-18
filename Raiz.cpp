/*
	Name: Raiz
	Author: Otto Canabrava  |  1874
	GITHUB: /oCanabrava
	Date: 18/08/17 12:50
	Description: Leia um numero fornecido pelo usuário. Se esse número for positivo, calcule a raiz
	quadrada do numero. Se o número for negativo, mostre uma mensagem dizendo que o numero é inválido.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main () {
	
	setlocale(LC_ALL, "");
	
	float num, raiz;
	
	printf("Digite um número: \n");
	scanf("%f", &num);
	
	if (num > 0) {
		raiz = sqrt(num);
		printf("A raiz quadrada de %f é %f \n", num, raiz);
	}
	
	else {
		printf("Número inválido!");
	}
	

}
