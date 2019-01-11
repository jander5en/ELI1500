#include <stdio.h>
#include <stdlib.h>
/*
   Lag et program med en funksjon int min(int x, int y).

Funksjonen skal returnere det minste av heltallene xog y.

Test ved funksjonen ved å lese inn tallene i main() fra tastaturet. Bruk deretter funksjonen min()til å skrive ut det minste tallet.

*/
int min(int x, int y);

int main()
{
	int inputx, inputy;

	printf("Legg inn to tall for å finne det minste\n");
	printf("\nTall 1: ");
	scanf("%d", &inputx);
	printf("\nTall 2: ");
	scanf("%d", &inputy);
	min(inputx, inputy);
	return 0;
}

int min(int x, int y){
	int min;
	if(x < y)
		printf("\n\n%d er minst", x);
	else if(x > y)
		printf("\n\n%d er minst", y);
	else
		printf("\n\n%d og %d er like store", y, x);
}	
