
/*Oppgave 10.7
Lag et program som

    leser tekst fra fil
    teller opp antall ganger ordene forekommer
    produserer en liste over over ordene og hvor mange ganger de står i teksten.

datafil.txt kan benyttes som eksempel og vil produsere listen
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGDE 100

int main(){

	FILE *finput;
	char *ord,*newline,substrings[100][20];
	int nummer[100] = {0};
	int antall,funnet;
	antall=funnet=0;

	finput = malloc(LENGDE*sizeof(long));
	ord = calloc((LENGDE/5),sizeof(char));
	newline = calloc(LENGDE,sizeof(char));
	finput = fopen("datafil.txt","r");
	
	while(!feof(finput)){
		fscanf(finput,"%s",ord);
		//printf("%s\n",ord);
		for(int j = 0;j < antall;j++)
			if(!strcmp(substrings[j],ord)){
				nummer[j]++;
				funnet++;
				break;
			}
		if(!funnet){
			strcpy(substrings[antall],ord);
			nummer[antall]++;
			antall++;
		}
		funnet = 0;
	}
	for(int i = 0;i < antall;i++)
		printf("%s frq %d\n",substrings[i],nummer[i]);

	return 0;
}
