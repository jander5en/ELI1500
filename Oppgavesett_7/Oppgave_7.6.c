/* Oppgave 7.6
Lag en funksjon som fjerner alle andre tegn enn bokstaver i en tekststreng.

Eksempel:

Er du sulten?

blir til

Erdusulten
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char tekst[80];
	printf("\nLes inn tekst:\n");
	fgets(tekst, 80, stdin);
	for(int i = 0;i < strlen(tekst)-1;i++){
		char c = tekst[i];
		if(isalnum(c))
			printf("%c",c);
		else
			;
	}
}

