/* Oppgave 7.7
Lag et program som leser inn en tekststreng, og avgjør om den er et palindrom.

Her må du enten lese inn alt med små/store bokstaver, eller finne en annen
løsning.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int revers(char str_input[], char str_output[], int lengde);

int main(){
	char input[80];
	char renset_input[80];
	char str_revers[80];
	fgets(input,80,stdin);
	int len = strlen(input)-1; 
	for(int i = 0;i < len;i++){
		char c = input[i];
		if(isalnum(c)){
			if(isupper(c))
				c = tolower(c);
			renset_input[strlen(renset_input)] = c;					
		}
	}
	revers(renset_input, str_revers, strlen(renset_input)); 
	if(strstr(renset_input, str_revers))
		printf("\n%s er et palindrom\n",input);
	else
		printf("\n%s er ikke et palindrom\n",input);
}

//tar inn en streng og skriver ut en omvendt kopi
int revers(char str_input[], char str_output[], int lengde){
	char omvendt[lengde];
	for(int i = 0; i < lengde;i++)
		str_output[i] = str_input[lengde-i-1];
}

