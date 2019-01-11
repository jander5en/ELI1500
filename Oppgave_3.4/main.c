#include <stdio.h>
#include <stdlib.h>

/*
Lag en funksjon som konverterer temperaturer i Celsius til Fahrenheit:

float  CtilF (float celsius)

Test funksjonen ved å lage et program som skriver ut en tabell a la denne:

 Celsius      Fahrenheit
    31.0            87.8
    32.0            89.6
    33.0           .....
    ....           .....
    38.0           100.4

Formelen for konvertering er

f=9c5+32f=\frac{9 c}{5} + 32f=5

9c​+32

Husk lærdommen fra Oppgave 1-6 om farene ved heltallsdivisjon!
*/

float CtilF(float celsius);

int main()
{
	int i, inputx, inputy, diff;
	float celsone, celstwo, min;

    printf("Celsius til fahrenheit kalkulator mellom 2 Celsius verdier\n");

		printf("\nFørste verdi: ");
		scanf("%d", &inputx);
		celsone = (float)inputx;

		printf("\nAndre verdi: ");
		scanf("%d", &inputy);
		celstwo = (float)inputy;

		if(inputx < inputy){
			diff = inputy - inputx;
			min = celsone;
		}
		else if(inputx > inputy){
			diff = inputx - inputy;
			min = celstwo;
		}
		else if(inputx == inputy){
			diff = 1;
			min = celsone;
		}

		printf(" Celsius    Fahrenheit");
		for(i = 0;i <=diff;i++)
			printf("\n%8.1f%14.1f\a", (min + (i)), CtilF((min + (i))));

	printf("\n\n");
    return 0;
}

float CtilF(float celsius){
	float fahr;

	fahr = (float)9/5 * celsius + (float)32;

	return fahr;
}
