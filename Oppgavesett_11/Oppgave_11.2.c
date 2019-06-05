
/* Oppgave 11.2
Lag et program som leser inn tre tall som parametre til main() og forteller hvilket tall som er størst.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	int storst = 0;
	for(int i = 1;i<argc;i++){
		if(isdigit(argv[i])){
			int x = atoi(argv[i]);
			if(x > storst)
				storst = x;
		}
	}
	printf("\n%d er størst",storst);
}
