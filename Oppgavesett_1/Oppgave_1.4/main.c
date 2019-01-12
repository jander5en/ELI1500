/*Oppgave 1.4
En fornøyelsespark har følgende priser:

    Voksen 210,- kroner for voksne
    Barn 150,- kroner for barn. 

Skriv et program som beregner pris for en gruppe besøkende:

    Skriv en passende ledetekst<mer>
    Les inn antall voksne og antall barn
    Beregn og skriv ut total billettpris. 

Bruk heltallsvariable i denne oppgaven. 
*/

#include <stdio.h>
#include <stdlib.h>

//defienerer konstanter til prisene
#define PVOKSNE 210
#define PBARN 150

int main()
{
    int voksne, barn, sum;
	voksne = barn = sum = 0;

	printf("Billettpriser for fornøyselsesparken\n\n");
	
	//Ta input til voksne og barn
	printf("Antall voksne: ");
	scanf("%d", &voksne);

	printf("\nAntall barn: ");
	scanf("%d", &barn);

	//sjekk om det fins 0 verdier for å unngå feil, gang ut og summer	
	if(voksne != 0)
		sum = voksne*PVOKSNE;
	if(barn != 0)
 		sum = sum + barn*PBARN;

	printf("\nPrisen er %d NOK\n", sum);
		
    return 0;
}
