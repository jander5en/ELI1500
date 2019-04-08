/* Oppgave 8.8
   Lag et program som oversetter fra morsekode til vanlig tekst. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--","-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};


	char input[100];
	char *ord[100];
	char kode[100];
	char *deord[100];
	char dekode[100];
	char buffer[100];
	char kar[10];
	int spaces[50];
	int i, lettercount,spacecount; 
	i = lettercount = spacecount = 0;

	printf("Skriv inn setning: ");	
	fgets(input,100,stdin);

	ord[0] = strtok(input," ");
	while(ord[i] != NULL){
		i++;
		ord[i] = strtok(NULL, " ");
	}

	printf("\nOversatt til morsekode\n");
	for(int j = 0;j < i;j++){
		for(int k = 0;k < strlen(ord[j]);k++){
			if(isalpha(ord[j][k])){
				strcat(kode,morse[toupper(ord[j][k])-'A']);
				strcat(kode, " ");
				lettercount++;
			}
		}
		spaces[j] = lettercount;
		lettercount = 0;
		strcat(kode,"  ");
	}
	printf("\n%s\n", kode);

	i = 0;
	deord[0] = strtok(kode," ");
	while(deord[i] != NULL){
		i++;
		deord[i] = strtok(NULL, " ");
	}

	printf("\n\nOversatt tilbake til tekst:\n");
	for(int j = 0;j < i;j++){
		for(int k = 0;k < 26;k++){
			if(strcmp(deord[j],morse[k]) == 0){
				kar[0] = (char)(k+'A');
				strcat(dekode, kar);
				lettercount++;
				break;
			}
		}
		if(spaces[spacecount] == lettercount){
			spacecount++;
			strcat(dekode, " ");
			lettercount = 0;
		}
	}
	printf("\n%s\n", dekode);
} 

