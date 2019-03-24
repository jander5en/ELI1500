/* Oppgave 7.5
Lag et program som oversetter en innlest tekst til røverspråk. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int vokal(int c);
//...
void main(){
	char tekst[40];
	char roverspraak[40];
	printf("les inn streng\n");
	fgets(tekst, 40, stdin);
	printf("\nOversatt til roverspraak:\n");
	for(int i = 0; i < strlen(tekst)-1;i++){
		char c = tekst[i];
		if(isalpha(c)){
			int er_vokal = vokal(c);
			if(er_vokal == 0)
				printf("%c%c%c",c,'o',c);
			else
				printf("%c",c);
		}
		else
			printf("%c",c);
	}
}

int vokal(int c){
	char vokal[10] = {'a','e','i','o','u','y'};
	int vok_len = strlen(vokal);
	int er_vok = 0;
	for(int j = 0;j < vok_len;j++){
	//	printf("|%c|%c|",c,vokal[j]);
		if(c == vokal[j]){
			er_vok = 1;
			break;
		}
		else
			er_vok = 0;
	}
	return er_vok;
}
