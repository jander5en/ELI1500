/* Oppgave 5.5
Lag en funksjon

float median(float x[], int lengde)

som finner medianen av tallene i et array x. Medianen er definert som grenseverdien slik at halvparten av verdiene ligger under denne grenseverdien. Dersom arrayet har et like antall verdier er det vanlig å angi medianen som gjennomsnittet av de to verdiene i midten. 
*/

#include <stdio.h>
#include <stdlib.h>

float median(float x[], int lengde);
void sort(float x[], int lengde);

int main()
{
	int i, lengde;
	float x[6] = {5.0, 4.7,10.0,23.0,3.0,2.0};	
	lengde = (sizeof(x)/4);
    printf("\n");

	printf("arrayet x[]:\n");
	for(i = 0;i < lengde;i++)
		printf("%2.1f ", x[i]);
    printf("\n\n");
	
	printf("Medianen til arrayet x[] er: %2.1f\n\n", median(x,lengde));

    return 0;
}

float median(float x[], int lengde){
	int i;	
	float med1, med2, median;
	//kaller på sort for å kunne sortere arrayet median har fått
	sort(x,lengde);
	//regner ut medianen etter om lengden er oddetall eller partall
	//bruker egenskapene til int avrunding til å finne rett posisjon i x[]
	if(lengde%2 == 0){
		med1 = x[lengde/2];
		med2 = x[(lengde/2)-1];
		median = (med1+med2)/2;
	}
	else
		median = x[lengde/2];

	return median;

}

void sort(float x[], int lengde){
	int i, j;
	float buffer = 0.0;
	//løser sorteringen med en 2D løsning. dvs O(n^2) for å sortere
	for(j = 0;j < lengde;j++)
		for(i = 0;i < lengde;i++){
			if(x[i] < x[i+1]){
				buffer = x[i];
				x[i] = x[i+1];
				x[i+1] = buffer;
			}	
		}
}


