/*Oppgave 1.10
I et 2-dimensjonalt plan er avstanden mellom to punkter gitt ved Euklidisk avstand.

Lag et program som leser inn to punkter med x- og y-verdier med passende ledetekst. Programmet skal så skrive ut avstanden mellom punktene.

Her må du finne kvadratroten av et tall. Da skriver du #include <math.h> i starten. Kvadratroten av et tall x finnes med funksjonen sqrt(x).

Eksempel:

float x=25.0
float rot=sqrt(x); 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, rot;
	//Tar input for punkt 1:
	printf("\nx1: ");
	scanf("%f",&x1);

	printf("\ny1: ");
	scanf("%f",&y1);

	//Tar input for punkt 2:
	printf("\nx2: ");
	scanf("%f",&x2);

	printf("\ny2: ");
	scanf("%f",&y2);

	//Regner ut kvadratroten av differansene (pytagoras med summen av forandring
	//langs x og y) 
	//sqrt((x2 - x1)^2 + (y2 - y1)^2)
	rot = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	printf("Avstanden mellom punktene er: %.2f\n", rot);

    return 0;
}
