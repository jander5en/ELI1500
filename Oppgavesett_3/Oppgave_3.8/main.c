/*Oppgave 3.8
Lag en funksjon

void skriv_stjerner(int n)

som skriver ut nnn stjerner på en linje. Lag et program som skriver ut følgende (bruk funksjonen):

* 
** 
*** 
**** 
*****
*/

#include <stdio.h>
#include <stdlib.h>

void skriv_stjerner(int n){
	int i, j;

	for(i = 0;i <= n;i++){
		for(j = 0;j <= i;j++)
			printf("*");		
		printf("\n");
	}
}

int main()
{
	int input;
	
	printf("skriv ut stjerner i en trekantform med størrelse: ");
	scanf("%d", &input);
	printf("\n\n");
	skriv_stjerner(input);

	return 0;
}
