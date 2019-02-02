/*Oppgave 5.4
Lag en funksjon

void sort(float x[], int lengde)

som sorterer arrayet x i synkende rekkefølge, dvs. at det største tallet kommer
først. Den andre parameteren er lengden av arrayet. Lag et program der du tester
funksjonen.*/

#include <stdio.h>
#include <stdlib.h>

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

int main()
{
	int i, lengde;
	float x[5] = {4.7,10.0,23.0,3.0,2.0};	
	lengde = (sizeof(x)/4);

	printf("arrayet x[] usortert:\n");
	for(i = 0;i < lengde;i++)
		printf("%2.1f ", x[i]);
    printf("\n\n");
	sort(x,lengde);
	
	printf("arrayet x[] sortert høyest til lavest:\n");
	for(i = 0;i < 5;i++)
		printf("%2.1f ", x[i]);
    printf("\n\n");
    return 0;
}
