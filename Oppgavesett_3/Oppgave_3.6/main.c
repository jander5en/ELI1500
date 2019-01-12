/*Oppgave 3.6
Lag en funksjon int terning(void) som returnerer et tilfeldig tall mellom 1 og 6.

Inkluder <stdlib.h> for å få tilgang til funksjonen rand()
Inkluder <time.h> og bruk srand(time(NULL)) for å unngå å få samme resultat hver gang.
I main() lager du en løkke som kaster terningen 3000 ganger, og teller opp og skriver ut antall seksere. Vurder resultatet.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int terning(void){
	int input, resultat;
	input = rand()%6; 
/*
	if(input <= 16)
		result = 1;
	else if(input > 16 && input <= 32)

*/
	resultat = input + 1;
	return resultat;
}

int main()
{
	int i, kast, seks;	
	
	for(i = 0;i <= 3000000;i++){
		srand(time(NULL)+i);	
		kast = terning();
		//printf("%d\n", kast);	
		if(kast == 6)
			seks++;
	}
	printf("\n\n%d seksere på 3000000 kast", seks);

	return 0;
}

