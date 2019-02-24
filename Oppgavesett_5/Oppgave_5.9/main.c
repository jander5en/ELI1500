/* Oppgave 5.9
Lag et program som leter etter et bestemt mønster av 3 bit i en unsigned int.

For eksempel:

    Tallet

    0xAAAAAAAA0xAAAAAAAA0xAAAAAAAA =10101010101010101010101010101010=10101010101010101010101010101010=10101010101010101010101010101010 inneholder mønstrene (101)(101)(101) og (010)(010)(010), men ingen andre. 

    Les inn bitmønsteret som en unsigned int med verdier 0-7.
    Les inn et tall (som unsigned int) og skriv ut om bitmøsteret forekommer i tallet eller ikke. 

Forslag:

    Bruk en maske som består av 3 enere, resten nuller.
    Test om masken og tallet er lik det mønsteret det søkes etter.
    Dersom testen over feiler, høyreskift tallet og prøv igjen.
*/

#include <stdio.h>
#include <stdlib.h>

int bitmonster(unsigned int tall, unsigned int monster);
//brukte eksempelet til Ola. Lag noe mer ut av dette senere hvis tid.
int main()
{
	unsigned int tall; //målet for letingen
	unsigned int bitmonstr; //mønsteret i 3 bit (0-7)

	//bitoperasjoner lissom....
    printf("\nLes inn tallet som skal sjekkes");
	scanf("%i", &tall);
	printf("Les inn en tre bits sekvens (0-7)\n");
	scanf("%i", &bitmonstr);

	if (bitmonster(tall,bitmonstr) == 1)
		printf("\n bitsekvens %d finnes i %x\n", bitmonstr, tall);
	else
		printf("\n bitsekvens %d finnes ikke i %x\n", bitmonstr, tall);
    return 0;
}


int bitmonster(unsigned int tall, unsigned int monster){
	unsigned int maske = 7;
	int treff = 0;
	int i;

	if (monster > 7)
		printf("\nFeil tall. Bruk mellom 0 til 7");
	else
		for (int i = 0;i < 30;i++){
			printf("debug: %d %d %d %d | ",tall&maske,tall, monster,maske);
			if((tall&maske) == monster){
				printf("h34");
				treff = 1;
				break;
			}
			else // bitshift til høyre
				tall = tall >> 1;
		}
	return treff;
}
