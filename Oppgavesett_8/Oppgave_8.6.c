
/* Oppgave 8.6
   Lag et program som

    leser inn et søkeord
    leser inn en setning
    forteller hvor mange ganger søkeordet forekommer i setningen.

Her kan du velge om du skal lete etter hele ord, eller også deler. Eksempel: dersom «potet» er søkeordet kan du velge om «potetmos» skal telles med.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	char input[100];
	char soek[100];
	char *ord[100];
	char buffer[100];
	int i, lengde, count;
	i = lengde = count = 0;

	printf("Skriv inn setning: ");	
	fgets(input,100,stdin);

	ord[0] = strtok(input," ");
	while(ord[i] != NULL){
		i++;
		ord[i] = strtok(NULL, " ");
	}

	//legg inn søkeordet
	printf("søke ord: ");	
	fgets(soek,100,stdin);

	//Tar ut linjeskiftkarakteren fra det siste elementet i setningen
	lengde = (strlen(ord[i-1])-1);
	for(int j = 0;j < lengde;j++)
		buffer[j] = ord[i-1][j];
	ord[i-1] = buffer;

	//gjør det samme for søkeordet
	soek[strlen(soek)-1] = '\0';

	for(int j = 0;j < i;j++){
		if(strcmp(soek,ord[j])==0)
			count++;
	}

	printf("\n%s gjentar seg %d ganger i setningen.\n",soek,count);
	printf("\n");
} 
