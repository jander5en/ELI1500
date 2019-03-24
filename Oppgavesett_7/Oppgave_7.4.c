/*Oppgave 7.4 
Lag et program som leser inn en tekststreng og skriver den ut baklengs.
*/

#include<stdio.h>
#include<string.h>

int revers(char str_input[], int lengde);

int main(){
	char input[40];
	/*
	char c;
	int j = 0;
	while((c = getchar()) != NULL){
		printf("test %c ", c);
		input[j] = c;
		if(iscntrl(c))
			break;
	}*/
	gets(input);
	revers(input, strlen(input)); 
	printf("\nsetningen i revers er:\n%s\n\n", input);
}

//tar inn en streng og skriver over med den omvendte
int revers(char str_input[], int lengde){
	char omvendt[lengde];
	for(int i = 0; i < lengde;i++)
		omvendt[i] = str_input[lengde-i-1];
	for(int i = 0;i < lengde;i++) 
		str_input[i] = omvendt[i];
}

