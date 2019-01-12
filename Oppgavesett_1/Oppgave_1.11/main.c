/*Oppgave 1.11
Fornøyelsesparken i Oppgave 1-4 har redusert prisene og innført en rabattordning::

    Voksen 180,- kroner for voksne
    Barn 100,- kroner for barn.
    Grupper på minst 10 personer får 10 % rabatt. 

Lag et program som leser inn antall voksne og antall barn, og skriver ut hvor mye gruppen skal betale.

    Skriv en passende ledetekst<mer>
    Les inn antall voksne og antall barn
    Beregn og skriv ut total billettpris. 
*/

#include <stdio.h>
#include <stdlib.h>

//Konstantene som brukes til å regne ut beløp
#define VOKSENP 180
#define BARNP 100
#define RABATT 0.9

int main()
{
	int voksne, barn, sum;
	float rabattsum;
	voksne = barn = sum = 0;	

    printf("Beregn totalpris for en gruppe barn og voksne. Grupper på over 10 personer får 10%% rabatt.\n\nAntall Voksne: ");
	scanf("%d",&voksne);
	printf("\nAntall barn: ");
	scanf("%d",&barn);

	//sjekker om det finnes 0 verdier før multipliseringen gjøres
	if(voksne != 0)
		sum = voksne*VOKSENP;
	if(barn != 0)
		sum = sum + barn*BARNP;
	//Hvis antallet voksne og barn er 10 eller mer castes sum til å være en
	//float og multipliseres med rabatt konstanten
	if((voksne + barn) >= 10){
		rabattsum = (float)sum*RABATT;
		printf("Prisen med 10%% rabatt er: %3.2f", rabattsum);
	}
	else	
		printf("Prisen er %d", sum);
    return 0;
}
