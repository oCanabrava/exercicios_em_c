/*
	Name: Meses
	Author: Otto Canabrava  |  1874
	GITHUB: /oCanabrava
	Date: 18/08/17 15:31
	Description: Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
	correspondente a este numero. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
*/

#include <locale.h>
#include <stdio.h>

main() {
	
	setlocale(LC_ALL, "");
	
	int mes;
	
	printf("Digite um número de 1 a 12: \n");
	scanf("%i", &mes);
	
	switch(mes) {
		
	case 1:
			printf("Janeiro");
			break;
			
	case 2:
			printf("Fevereiro");
			break; 
			
	case 3:
			printf("Março");
			break; 
			
	case 4:
			printf("Abril");
			break; 
			
	case 5:
			printf("Maio");
			break; 
			
	case 6:
			printf("Junho");
			break; 
			
	case 7:
			printf("Julho");
			break; 
			
	case 8:
			printf("Agosto");
			break; 
			
	case 9:
			printf("Setembro");
			break; 
			
	case 10:
			printf("Outubro");
			break; 
			
	case 11:
			printf("Novembro");
			break; 
			
	case 12:
			printf("Dezembro");
			break; 
			 
	default: 
		printf("Número inválido!");
		break;
	
	}
}
