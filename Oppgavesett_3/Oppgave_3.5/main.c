/* Oppgave 3.5
   Lag en funksjon

float hypotenus(float katet1, float katet2)

som beregner lengden av hypotenusen i en rettvinklet trekant med sidekanter katet1 og katet2.

Les mer om rettvinklede trekanter her.

Test funksjonen ved lage et program som

    leser inn verdien på to kateter
    skriver ut lengden av hypotenusen

Kateter med lengde 3 og 4 skal gi resultatet 5; fordi 32+42=52.

Her må du inkludere <math.h> og beregne kvadratroten med funksjonen sqrt(x).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hypotenus(float katet1, float katet2);

int main()
{
	float inputx, inputy;

    printf("Les inn lengden på katetene til en rettvinklet trekant for å finne hypotenusen\n");

	printf("Første katet: ");
	scanf("%f",&inputx);
	printf("Andre katet: ");
	scanf("%f",&inputy);

	printf("Hypotenusen er: %.2f", hypotenus(inputx, inputy));


    return 0;
}

float hypotenus(float katet1, float katet2){
	return sqrt((katet1*katet1) + (katet2*katet2));
}
