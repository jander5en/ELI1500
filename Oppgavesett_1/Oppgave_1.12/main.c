/*Oppgave 1.12
Innlesing av data til et program kan gjøres uten at størrelsen på datamengden er kjent. Vi må likevel kunne avslutte innlesingen.

Dersom for eksempel et program skal motta tall for nedbørsdata vet vi at alle tall er positive eller null, så en negativ verdi kan avslutte innlesingen.

Skriv et program etter følgende spesifikasjon:

    Les inn en mengde data. For eksempel nedbørsmengde per dag i Oslo i perioden 1.1.18-1.2.18.
    Når nnlesingen er slutt presenteres største og minste verdi, og gjennomsnittsverdien. 

Her er det naturlig å bruke while løkke.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int end, sum, input, antall, max, min;
	float average;
	input = end = sum = antall = max = 0;
	min = 100;
	
    printf("Legg inn verdiene for nedbør dag for dag i perioden 1.1.18 - 1.2.18: \n");

	while(antall < 31){
		//antall teller dagene
		++antall;
		printf("\nmm Nedbør for %d.1.18: ", antall);
		scanf("%d", &input);
		//Hvis input er en negativ verdi avsluttes inntastingen
		if(input < 0){
			break;
		}
		//Hvis input er større eller mindre enn de definerte min max verdiene
		//oppdateres disse
		if(input > max)
			max = input;
		if(input < min)
			min = input;
		//summerer nedbørsmengden for hele perioden
		sum = sum + input;	
		//nuller ut input for å hindre at det tas med verdier til neste runde
		input = 0;


	}
	//regner ut gjennomsnittet med sum og antallsvariabelen
	average = (float)sum/antall;
	printf("I perioden 1.1.18 tom %d.1.18:\n",antall);
	printf("Max nedbør: %d\nMin nedbør: %d\nGjennomsnittsnedbør: %2.2f", max, min,
			average);

    return 0;
}
