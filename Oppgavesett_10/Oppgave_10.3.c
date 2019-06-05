
/*Oppgave 10.3
Lagre dataene fra karakterer.txt i en fil.

Filen inneholder karakterene for elevene i en klasse. På forhånd er antall elever i klassen ukjent.

Lag et program som beregner gjennomsnittskarakteren for klassen.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	FILE *karakterer = fopen("karakterer.txt","r");

	int sum, x;
	char c = 0;
	x=sum=0;

	while((c = fgetc(karakterer)) != EOF){
		if(isdigit(c)){
			sum+=(int)(c-'0');
			x++;
		}
	}
	printf("\n%d %d\n",sum,x);
	printf("Karaktersnittet er: %d",sum/x);

				
	return 0;

}
