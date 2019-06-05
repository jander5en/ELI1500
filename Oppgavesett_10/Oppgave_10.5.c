
/* Oppgave 10.5
 Lag et program som leser inn tekst fra en fil og leter etter en bestemt sekvens av karakterer.

Bruk for eksempel ordet bruker spion som eksempel.

Følgende begrensninger for tekstfilen det leses fra kan være:

    Filen inneholder kun tekst
    Hver linje er maksimalt 70 tegn lang.
    Hver linje avsluttes med linjeskift. 

slik som filen spiontekst.txt.

La programmet lese inn linje for linje, og hver gang søkesekvensen opptrer skal linjen skrives ut fra og med sekvensen.

Linjene skal nummereres, og linjenummer skrives ut.

Husk at ordet kan opptre flere ganger på en linje.

Eksempel: Hvis linje 10 i tekstfilen inneholder

Pakken Espionage DeLuxe inneholder alt innen kontorspionasje.

så skal programmet skrive ut:

10 spionage DeLuxe inneholder alt innen kontorspionasje.
10 spionasje.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LENGDE 70

int main(void){

	FILE *text;
	char *importstring, *treff;
	char *test = "spion";
	int i = 0;
	int memadd = 0;

	text = fopen("spiontekst.txt","r");
	if(text == NULL){
		perror("Error opening file");
		return(-1);
	}

	treff = malloc((LENGDE/7)*sizeof(long));
	importstring = malloc(LENGDE*sizeof(char));

	while(fgets(importstring,LENGDE,text)){
		while((treff = strstr(importstring,test)) != NULL){
			if(treff > importstring)
				memadd = treff-importstring;	
			if(memadd > 0)
				printf("\n%d: %s\n",i+1,(importstring+memadd));
			strcpy(importstring,(importstring+memadd+strlen(test)));
		}
		i++;
	}
	
	fclose(text);

	return 0;
}
