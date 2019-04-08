
/* Oppgave 8.2
Som Oppgave 8-1, bare at vi antar at brukeren noen ganger har, og noen ganger ikke har, mellomnavn.

Hvis brukeren har mellomnavn skrives navnet ut på formen etternavn, fornavn mellomnavn. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	char input[100];
	char *navn[100];
	char etter[100];

	int i = 0;
	int siste = 1;	
	printf("Les inn navn: ");	
	fgets(input,100,stdin);

	navn[0] = strtok(input," ");

	while(navn[i] != NULL){
		i++;
		navn[i] = strtok(NULL, " ");
	}
	//sjekk om det finnes et mellomnavn og juster posisjonen til bakerste string
	if(navn[2])
		siste = 2;
	printf("\nnr 2: %s,%d\n", navn[2], siste);
	//Tar ut linjeskiftkarakteren fra det siste elementet
	for(int j = 0;j < (strlen(navn[siste])-1);j++)
		etter[j] = navn[siste][j];

	printf("\nDu er registrert som %s, %s", etter,navn[0]);
	//hvis det finnes et mellomnavn skrives det ut til sist
	if(siste == 2)
		printf(" %s",navn[1]);
	printf("\n\n");

}
