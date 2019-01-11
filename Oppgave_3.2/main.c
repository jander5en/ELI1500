#include <stdio.h>
#include <stdlib.h>
#define VALUTA 9.9113
/*
Lag en funksjon void EUR2NOK(float euro) som regner om fra euro til kroner og skriver ut resultatet.

Test funksjonen ved å lese inn et antall euro med passende ledetekst. Bruk funksjonen til å regne om og skrive ut resultatet.

*/

float EUR2NOK(float x);

int main()
{
	float inputEUR;

	printf("Valutakalkulator EUR til NOK. (kurs 05.01.2018)\n");
    printf("Legg inn beløp: ");
	scanf("%f", &inputEUR);

	printf("%.2fEUR er %.2fNOK", inputEUR, EUR2NOK(inputEUR));

    return 0;
}


float EUR2NOK(float x){
	float sum;
	sum = x * VALUTA;

	return sum;
}
