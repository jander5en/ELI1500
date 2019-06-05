
/*Oppgave 9.3
En pølsebod-kjede vil lage et program som holder oversikt over de ulike pølsebodene.

Lag et program der du definerer en struktur pølsebod (bruk gjerne typedef til å gi strukturen et annet navn) som inneholder

    char innehaver[30]
    char plassering[30]

Lag et array av pølseboder.

Lag en løkke som leser inn navn og innehaver på for eksempel 5 pølseboder.

Skriv ut en oversikt over boder med innehaver og plassering. 
*/
#include <stdio.h>
#include <string.h>
#define NBODS 5

	struct poelsebod{
		char innehaver[30];
		char plassering[30];
	} bods[NBODS];

int main(){

	for(int i = 0;i < NBODS;i++){
		printf("\nNavn på innehaver: ");
		fgets(bods[i].innehaver, sizeof bods[i].innehaver,stdin);
		printf("\nplassering: ");
		fgets(bods[i].plassering, sizeof bods[i].plassering,stdin);

		//fjerner linjeskiftkarakter fra strengene
		bods[i].innehaver[strcspn(bods[i].innehaver,"\n")] = 0;
		bods[i].plassering[strcspn(bods[i].plassering,"\n")] = 0;
	}

	printf("\n%10s\t|\t%10s","Innehavere:","Plassering:");
	for(int i = 0;i < NBODS;i++){
		printf("\n%10s\t|\t%10s",bods[i].innehaver ,bods[i].plassering);
	}

	printf("\n\n");

	return 0;

}
