
/*Oppgave 10.7
Programmet i denne oppgaven skal registrere deltagerne i en konkurranse.

Det er 5 deltagere med startnummer 100-104.

Lag en struct deltager med elementene

char navn[20]
int startnr
int tid

Lag en binær fil der deltagerne kan lagres med navn og startnummer og tid.

Data for hver enkelt deltager leses fra tastaturet eller det kan leses fra en tekstfil som er skrevet på forhånd. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGDE 100

typedef struct{
	char navn[20];
	int startnr;
	int tid;
}deltager;

int main(){

	FILE *finput;
	deltager fistus;
	//fistus = calloc((LENGDE/20),sizeof(deltager));
	finput = malloc(LENGDE*sizeof(long));
	finput = fopen("bindeltagere.txt","wb");

	for(int i = 0;i<5;i++){
		printf("Legg inn delagernavn: ");
		scanf("%s",fistus.navn);
		fflush(stdin);
		printf("Deltager nr: ");
		scanf("%d",&fistus.startnr);
		fistus.startnr+=100;
		fflush(stdin);
		printf("tid: ");
		scanf("%d",&fistus.tid);
		fflush(stdin);
		fwrite(&fistus,sizeof(deltager),1,finput);
	}

	fclose(finput);
	/*readout av filen
	finput = fopen("bindeltagere.txt","rb");
	while(!feof(finput)){
		if(!feof(finput)){
			fread(&fistus,sizeof(fistus),1,finput);
			printf("%s %d %d",fistus.navn,fistus.startnr,fistus.tid);
		}
	}
	*/
	return 0;
}
