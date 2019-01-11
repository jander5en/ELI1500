#include <stdio.h>
#include <stdlib.h>
/*
   Lag en funksjon void overskrift (void). Funksjonen skal benyttes til å skrive ut en overskrift til skjerm. For eksempel:

Dette avanserte programmet er laget av Per.

Test funksjonen din ved å kalle den fra main():
*/

void overskrift();

int main()
{
	overskrift();
    return 0;
}

void overskrift(void){
	printf("Mens dette avanserte programmet er laget av jonas\n");
}
