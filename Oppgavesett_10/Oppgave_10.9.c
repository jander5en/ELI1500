
/*Oppgave 10.7
Programmet i denn oppgaven skal åpne binærfilen fra Oppgave 10-8.

Innholdet i filen skal skrives til skjerm og til en tekstfil.
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

	int j = 0;
	FILE *finput;
	deltager fistus[5];
	finput = malloc(LENGDE*sizeof(long));
	finput = fopen("bindeltagere.txt","rb");

	while(!feof(finput)){
		if(!feof(finput)){
			fread((fistus+j*sizeof(deltager)),sizeof(fistus),1,finput);
			j++;
		}
	}
	for(int i = 0;i<5;i++)
		printf("%s %d %d\n",fistus[i].navn,fistus[i].startnr,fistus[i].tid);
	
	fclose(finput);

	finput = fopen("bindeltagereout.txt","wb");
	for(int i = 0;i<5;i++)
		fwrite((fistus+i*sizeof(deltager)),sizeof(fistus),1,finput);
	fclose(finput);

	return 0;
}


