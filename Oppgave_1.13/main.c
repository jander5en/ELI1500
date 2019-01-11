/*Oppgave 1.13
Ved å inkluderer biblioteket #include <stdlib.h> i starten av programmet kan gis det tilgang til en funskjon for å lage tilfeldige tall:

rand() - Gir tilfeldig heltallsverdi mellom 0 og en maximumsverdi (definert i bibioteket etter maskinarkitektur).

Et tall i området 0-99 kan trekkes ved å bruke modulusoperatoren:

i=rand()%100.

Lag et program som

    trekker to tilfeldige tall og presenterer et regnestykke for brukeren.

    For eksempel: 16+2=16+2= 16+2= 

    deretter lar brukeren skrive inn et svar
    og til slutt forteller om svaret er riktig.

Problem: Det samme regnestykket vil komme hver gang programmet kjøres. Dette unngås ved å inkludere #include <time.h> i starten, og programlinjen srand(time(NULL)); i programmet før de tilfeldige tallene trekkes. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,y,input;
	//setter frøet til rand() til en verdi basert på klokken slik at det kommer
	//en ny verdi hver gang programmet kjører
	srand(time(NULL));
	//rand()%100 gir et tilfeldig tall mellom 0 og 99
	x = rand()%100;	
	y = rand()%100;	
    printf("Hva er %d + %d?\n", x, y);
	scanf("%d",&input);
	
	//Evaluerer om brukeren har gitt rett svar.
	if(input == (x + y))
		printf("Riktig! %d + %d = %d", x, y, input);
	else
		printf("Feil. Riktig svar er %d", (x+y));

    return 0;
}
