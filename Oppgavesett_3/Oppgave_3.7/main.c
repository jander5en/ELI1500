/*Oppgave 3.7
Lag en funksjon int minst (int a, int b, int c) som returnerer det minste av tre tall.

Bruk funksjonen i Oppgave 3-3 for å oppnå dette enklest mulig.
*/

#include <stdio.h>
#include <stdlib.h>

int min(int x, int y, int z);

int main()
{
	int inputx, inputy, inputz, minnum;

	printf("Legg inn tre tall for å finne det minste\n");
	printf("\nTall 1: ");
	scanf("%d", &inputx);
	printf("\nTall 2: ");
	scanf("%d", &inputy);
	printf("\nTall 3: ");
	scanf("%d", &inputz);

	if(inputx == inputy && inputy == inputz)
		printf("\n%d, %d  og %d er like storei\n", inputx, inputy, inputz);
	else{
		minnum = min(inputx, inputy, inputz);
		printf("\n%d er minst\n", minnum);
	}
    return 0;
}

int min(int x, int y, int z){
	int min, res;
	if(x < y && x < z)
		res = x;
	else if(y < x && y < z)
		res = y;
	else if(z < y && z < x)
		res = z;
	else
		res = NULL;
}
