/* Oppgave 8.4
Lag et program som leser inn en setning, og og skriver ut hvor mange ord setningen inneholder. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	char input[1000];
	char *setning[50];

	int i = 0;
	printf("Les inn setning: ");	
	fgets(input,100,stdin);

	setning[0] = strtok(input," ");
	while(setning[i] != NULL){
		i++;
		setning[i] = strtok(NULL, " ");
	}
	
	printf("\nAntall ord i strengen: %d\n", i);

}
