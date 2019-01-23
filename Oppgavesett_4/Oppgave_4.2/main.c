/*Oppgave 4.2
I denne oppgaven skal største og minste verdi i et array finnes.

    Lag arrayet float x[6]
    Løp gjennom x og skriv ut minste og største verdi.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x[6] = {7.0, 23.0, 5.0, 4.7, 8.4, 9.0};
	float max, min;
	int i;
	
	max = 0.0;
	min = 100.0;
	
	//Sammenlikner med definerte min og maks verdier for å finne den største	
	for(i = 0;i <= 5;i++){
		if(x[i] > max)
			max = x[i];
		if(x[i] < min)
			min = x[i];
	}
    printf("\nDen minste verdien i x er %.1f og den største er %.1f\n", min, max);

    return 0;
}
