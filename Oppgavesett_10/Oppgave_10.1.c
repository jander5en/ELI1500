/*Oppgave 10.1
Bedriften Dupp AS produserer mellom 200 og 400 duppeditter per dag.

Lag et program som

    trekker 365 tilfeldige heltall mellom 200 og 400
    skriver datasettet til en sekvensiell tekstfil med navnet  produksjonsdata.dat.

Åpne til slutt produksjonsdata.dat i en teksteditor og kontroller at datasettet er lageret i fila. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ANTALL 365

int main(){
	
	int x,i;
	x=i=0;
	//bruker calloc i steden for malloc slik at minnet blir intialisert til 0.
	//Dette eliminerer feil som kommer av søppel i minnet.
	int *y;
	FILE *out_p = 0;
	y = calloc(ANTALL, sizeof(int));
	out_p = fopen("produksjonsdata.dat","w");

	srand(time(NULL));
	while(y[ANTALL] == 0){
		y[i] = 200 + rand()%201;
		printf("%d",y[i]);
		i++;
	}
	for(int j = 0; j <= ANTALL;j++)
		fprintf(out_p,"%d", y[j]);

	return 0;

}
