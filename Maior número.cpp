/*
	Name: Maior número
	Author: Otto Canabrava  |  1874
	GITHUB: /oCanabrava
	Date: 18/08/17 12:30
	Description: Faça um programa que receba dois numeros e mostre qual deles é o maior.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL, "");

	float n1, n2;

	printf("Digite dois números: \n");
	scanf("%f \n", &n1);
	scanf("%f", &n2);

	if (n1 > n2) {

		printf("\n %f é maior que %f \n", n1, n2);
	}

	else {

		printf("\n %f é maior que %f  \n", n2, n1 );
	}

	system("Pause");
	return 0;
}

