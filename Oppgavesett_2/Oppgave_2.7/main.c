/*Oppgave 2.7
Bruk to for løkker til å skrive ut:

* 
** 
*** 
**** 
***** 

En løkke skriver N stjerner på en linje, og en løkke løper gjennom N=1 til N=5.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	//to løkker gir et plan. Den ytterste representerer linjer og den
	//innerste kolonner. bruker i som test variabel i den indre for å få
	//kolonner tilsvarende linjetallet.
	for(i = 1; i <= 5;i++){
		for(j = 1; j <= i;j++)
			printf("*");
    	printf("\n");
	}
    return 0;
}
