/* Oppgave 8.3
   Lag et program som leser inn en dato på formen 12.03.09, og skriver den ut på formen 12. mars 2009.

Prøv om programmet ditt skrive ut følgende datoer:

20. juli 1969

og

24. desember 2018
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	char input[100];
	char *mnd[] = {"januar","februar","mars","april","mai","juni","juli","august","september","oktober","november","desember"};
	char *dato[100];
	char buffer[100];

	int i = 0;
	int	mndnr = 0;
	int siste = 2;
	printf("Les inn dato på formen DD.MM.YYYY : ");	
	fgets(input,100,stdin);

	dato[0] = strtok(input,".");

	printf("he3i");

	while(dato[i] != NULL){
		i++;
		dato[i] = strtok(NULL, ".");
	}
	/*
	//Tar ut linjeskiftkarakteren fra det siste elementet
	for(int j = 0;j < (strlen(dato[siste])-1);j++)
		buffer[j] = dato[siste][j];
	//mndnr = atoi(dato[1])-1;
	printf("\nDu skrev:\n%s. %s %s\n", dato[0],mnd[9],dato[2]);
	printf("\n\n");
*/
}
