/*Oppgave 1.2
  Lag et program som beregner arealet av en sirkel:

    Lag en variabel radius som inneholder radien.

float radius;

I dette programmet kan du skrive verdien inn i programmet. For eksempel:

float radius = 1.0;

    Programmet skal skrive ut arealet. For eksempel:

Arealet av en sirkel med radius 1.0 er 3.14.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float radius, areal;

	//Spør om og ta input fra bruker
	printf("Skriv inn radien av sirkelen: ");
	scanf("%f", &radius);

	//arealet er r^2*pi
	areal = (radius*radius)*3.14;

	printf("\n\nArealet av sirkelen er: %3.2f", areal);

    return 0;

}
