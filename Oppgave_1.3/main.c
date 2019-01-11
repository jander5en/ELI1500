/*Oppgave 1.3
I denne oppgaven skal du lage et program som konverterer mellom to enheter for vekt:

    Programmet skal regner om fra pund til kilogram.
        Ett pund er 0,454 kilogram. 
    Programmet skal lese inn antall pund med en passende ledetekst.
    Beregne antall kilogram og skriv ut resultatet. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float pund,kilo;

	//Ta input fra brukeren
	printf("Legg inn vekten i pund som skal konverteres: ");
	scanf("%f",&pund);

	//gjør omregningen og skriv ut
	kilo = pund*0.454;
	printf("\n%1.3f pund er %1.3f kilo", pund, kilo);

    return 0;
}
