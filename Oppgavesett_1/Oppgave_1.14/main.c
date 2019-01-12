/*Oppgave 1.14
ag et spill som

    trekker et tilfeldig heltall NNN, der 0<N<1000<N<1000<N<100.
    har en løkke der bruker blir bedt om å gjette en verdi for tallet NNN
    svarer om verdien er større eller mindre enn NNN.
    skriver programmet ut hvor mange forsøk som ble brukt når riktig verdi er funnet
    starter på nytt etter riktig verdi er funnet.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int input, tall;
	
	//sett opp tallet som skal gjettes av brukeren
	srand(time(NULL));
	tall = rand()%100;	
	
    printf("Gjett et tall mellom 0 og 100\n");
	while(1){
		//brukeren gjetter en verdi og får tilbakemelding om den er høyere eller
		//lavere. Avslutter når rett verdi legges inn.
		scanf("%d", &input);
		if(input > tall)
			printf("\nTallet er lavere");
		else if(input < tall)
			printf("\nTallet er høyere");
		else{
			printf("Riktig! %d er tallet! :-)", input);
			break;
		}
	}	
    return 0;
}
