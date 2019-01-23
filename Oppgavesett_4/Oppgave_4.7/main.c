/*Oppgave 4.7
Lag en funksjon

int arraysum(int  mittarray[], int lengde)

som returnerer summen av verdiene i mittarray. lengde er lengden på mittarray.

Test funksjonen ved å opprette et array i main(), og beregne summen ved hjelp av funksjonen. 
*/

#include <stdio.h>
#include <stdlib.h>

int arraysum(int mittarray[], int lengde){
	int i, res;
	for(i = 0;i < 5;i++)
		res += mittarray[i];
	return res;
}
int main()
{
	int mittarray[5] = {2,5,7,3,4};
	int array_lengde;

	array_lengde = sizeof(mittarray)/4;	
	printf("Summen på elementene i mittarray er: %d", arraysum(mittarray, array_lengde));	
    printf("\n");
    return 0;
}
