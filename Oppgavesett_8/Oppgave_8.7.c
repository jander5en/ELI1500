



/* Oppgave 8.7
Lag et program som oversetter en tekst til morsekode. Bruk et mellomrom mellom hver bokstav, og tre mellomrom mellom ord. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--","-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};


	char input[100];
	char *ord[100];
	char *kode[100];
	int i = 0; 

	printf("Skriv inn setning: ");	
	fgets(input,100,stdin);

	ord[0] = strtok(input," ");
	while(ord[i] != NULL){
		i++;
		ord[i] = strtok(NULL, " ");
	}

	for(int j = 0;j < i;j++){
		for(int k = 0;k < strlen(ord[j]);k++)
			if(isalpha(ord[j][k]))
				printf("%s ",morse[toupper(ord[j][k])-'A']);
		printf("   ");
	}
		
	printf("\n");
} 

