
/*Oppgave 10.6
 Fysikklærereren på en skole har arrangert fire prøver i løpet av året.

Poengsummene på prøvene er registrert i en fil på følgende form:

 Resultater for fysikkprøver 2011
Navn: Arne
Resultater: 42 56 67 88
Navn: Brian
Resultater: 51 88 91 92
Navn: Camilla
Resultater: 78 82 85 92

Lag et program som leser filen og skriver ut gjennomsnittlig poengsum for hver enkelt student. fysikk.txt kan brukes som datafil. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGDE 100

	typedef struct{
		char navn[20];
		int resultat;
	}student;

int main(){

	FILE *finput;
	char *linje,*newline,*substring;
	int nums[4];
	int start,i,buff;
	i=start=buff=0;
	student fystud[4];

	finput = malloc(LENGDE*sizeof(long));
	linje = calloc(LENGDE,sizeof(char));
	newline = calloc(LENGDE,sizeof(char));
	substring = malloc(LENGDE*sizeof(char));
	finput = fopen("fysikk.txt","r");
	
	while(!feof(finput)){
		fgets(linje,LENGDE,finput);
		if((start = strcspn(linje,":")) == 4){
			strcpy(fystud[i].navn,(linje+start+2));
		}
		else if((start = strcspn(linje,":")) == 10){
			strcpy(substring,(linje+start+2));
			sscanf(substring,"%d %d %d %d",nums,nums+1,nums+2,nums+3);
			for(int j = 0;j < 4;j++)
				buff+=nums[j];
			fystud[i].resultat = buff/4;
			buff = 0;
			++i;
		}
	}
	for(int j = 0;j<(sizeof(fystud)/sizeof(fystud[0]));j++){
		fystud[j].navn[strcspn(fystud[j].navn,"\n")] = 0;
		printf("%s har snitt %d\n",fystud[j].navn,fystud[j].resultat);
	}
	return 0;
}
