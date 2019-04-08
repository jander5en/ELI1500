/* Oppgave 8.5
Oppgave 5 Lag et program som leser inn en setning, og skriver ut ordene i motsatt rekkefølge.

Eksempel:
Per spiste elefanten
skrives ut som
elefanten spiste Per
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	char input[100];
	char *ord[100];
	char buffer[100];
	int i = 0;
	printf("Skriv inn setning: ");	
	fgets(input,100,stdin);

	ord[0] = strtok(input," ");
	while(ord[i] != NULL){
		i++;
		ord[i] = strtok(NULL, " ");
	}
	//Tar ut linjeskiftkarakteren fra det siste elementet
	for(int j = 0;j < (strlen(ord[i-1])-1);j++)
		buffer[j] = ord[i-1][j];
	ord[i-1] = buffer;

	//mndnr = atoi(dato[1])-1;
	printf("\nI motsatt rekkefølge: ");
	printf("%s ", buffer);

	for(int j = i-1;j >= 0;j--)
		printf("%s ", ord[j]);
	printf("\n\n");
} 
