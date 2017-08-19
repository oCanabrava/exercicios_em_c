/*
	Name: Fibonacci
	Author: Otto Canabrava  |  1874
	GITHUB: /oCanabrava
	Date: 19/08/17 11:19
	Description: Sequência Fibonacci que permita o usuário escolher quantos termos quer impresso.
	Lembrando que x tem que ser diferente de zero.
*/

#include <stdio.h>
#include <locale.h> 

main() {
	
	setlocale(LC_ALL, "");
	
	int num1 = 0, num2 = 1, num3, cont, x;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	if (x > 0) {
		
		for(cont=0; cont < x; cont++){
		
			printf("Sequência Fibonacci:  \n");
		
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
	
	printf("%i \n", num3);
	}
	}
	
	else {
		printf("Número inválido!");
	}
}
