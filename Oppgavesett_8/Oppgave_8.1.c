/* Oppgave 8.1
Lag et program som

    ber brukeren lese inn navnet sitt
    lagrer den innleste navnet i en tekststreng.
    bruker funksjonen strtok til å dele opp strengen i fornavn og etternavn.
    skriver ut navnet på formen etternavn, fornavn.

I denne oppgaven antar vi at brukeren oppgir nøyaktig ett fornavn og ett etternavn.

Eksempel:

Hva heter du?
Donald Duck

Du blir registrert som Duck, Donald
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
	
	printf("Les inn navn: ");	
	fgets(input,100,stdin);

	navn[0] = strtok(input," ");

	while(navn[i] != NULL){
		i++;
		navn[i] = strtok(NULL, " ");
	}
	//Tar ut linjeskiftkarakteren fra det siste elementet
	for(int j = 0;j < (strlen(navn[1])-1);j++)
		etter[j] = navn[1][j];

	printf("\nDu er registrert som %s, %s\n", etter,navn[0]);

}
