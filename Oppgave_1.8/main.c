/*Oppgave 1.8
Et heltall xxx er enten et partall eller oddetall. For å teste dette brukes oftest modulusoperatoren.

Lag et program som

    leser inn et tall xxx etter passende ledetekst,
    og skriver ut en avslutninstekst:
        Eksempel: Tallet 18 er et partall
        Eksempel: Tallet 23 er et oddetall
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;

    printf("test om et heltall er et partall eller oddetall.\n\nLegg inn tallet: ");
	scanf("%d",&x);

	//Bruker modulus til å teste om det er en restverdi	
	if(x%2 != 0)
		printf("tallet %d er et oddetall",x);
	else
		printf("tallet %d er et partall",x);

    return 0;
}
