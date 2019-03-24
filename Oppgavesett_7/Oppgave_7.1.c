/*Oppgave 7.1
 Programmet i denne oppgaven skal kunne produsere eksemplet under:

Les inn en setning:
My name is Bond, James Bond
MY NAME IS BOND, JAMES BOND
my name is bond, james bond

Programmet leser inn en tekststreng (her: My name is Bond, James Bond), deretter skriver programmet ut:

    innlest tekststreng
    samme tekststreng, men alle bokstaver skal være store
    samme tekststreng, men alle bokstaver skal være små

For innlesing er det greit å først deklarere for eksempel

char setning[80];
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char setning[80];

	printf("Les inn en setning: ");
	fgets(setning, 80, stdin);
	for(int i = 0; setning[i];i++)
		setning[i] = tolower(setning[i]);
	printf("Setningen med små bokstaver: %s\n", setning);
	for(int i = 0; setning[i];i++)
		setning[i] = toupper(setning[i]);
	printf("Setningen med store bokstaver: %s\n", setning);

	return 0;

}
