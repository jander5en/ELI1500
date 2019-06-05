
/* Oppgave 11.4
Lag et program som leser inn et ukjent antall tall som parametre til main() og skriver dem ut sortert etter størrelse.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
	int buff = 0;
	int x[argc];

	for(int i = 0;i<argc;i++)
		x[i] = 0;
	for(int i = 0;i<argc;i++){
		argv[i][strcspn(argv[i],"\n")] = 0;
		x[i] = atoi(argv[i]);
	}
	
	for(int i = 0;i<argc;i++)
		for(int j = 0;j<argc;j++)
			if(x[j] < x[j+1]){
				buff = x[j];
				x[j] = x[j+1];
				x[j+1] = buff;
			}	
			
	for(int i = 1;i<argc;i++)
		printf("\n%d ",x[i]);
}

