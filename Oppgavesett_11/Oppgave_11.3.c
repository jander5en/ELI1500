
/* Oppgave 11.3
Lag et program som får inn to tekststrenger som parametre og skriver ut hvilken som kommer først i alfabetet.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
	char storst[20]={0};
	for(int i = 1;i<argc;i++){
		for(int j = 0;j<strlen(argv[i])-1;j++)
			argv[i][j] = tolower(argv[i][j]);
	if(strcmp(storst,argv[i]) > 0)
		strcpy(storst,argv[i]);	
	}
	printf("\n%s er minst\n",storst);
}
