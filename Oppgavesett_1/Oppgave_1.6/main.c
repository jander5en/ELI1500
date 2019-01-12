/*Oppgave 1.6
Et heltall xxx kan for eksempel klassifiseres i to tre mengder:

    x>0x>0x>0
    x=0x=0x=0
    x<0x<0x<0

Lag et program som

    leser inn et heltall med passende ledetekst,
    skriver ut en sluttekst som forteller om tallet er positivt, negativt eller null. 

Dette kan du løse med tre if setninger eller med if/else if/else. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;

    printf("\nSriv inn tallet som skal evalueres: ");
	scanf("%d", &x);

	//tallet som er gitt evalueres og resultatet skrives ut direkte
	if(x>0)
		printf("x er positiv");
	else if(x==0)
		printf("x er lik 0");
	else if(x<0)
		printf("x er negativ");

    return 0;
}
