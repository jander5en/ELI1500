/*Oppgave 6.7

Lag en funksjon

void minogmax(int tall[], int lengde, int *maxpeker, int *minpeker);

som sørger for at det største tallet i arrayet tall[] pekes på av maxpeker og det minste pekes på av minpeker.

Inne i funksjonen kan du bruke at lengde er lengden av arrayet tall[].

Skriv et program der du tester funksjonen minogmax. 
*/

#include <stdio.h> 
#include <limits.h>


void minogmax(int tall[], int lengde, int *maxpeker, int *minpeker){
	//inlkuderer limits.h for å få tilgang på konstantene:
	int min = INT_MAX;
	int max = INT_MIN;
	//test om hver enkelt del av tall er ny størst eller minste
	for(int i = 0;i < lengde;i++)
		if(tall[i] > max)
 		   max = tall[i];	
		else if(tall[i] < min)
 		   min = tall[i];	
	//skriv over minneposisjonene med nye verdier.
	*maxpeker = max;
	*minpeker = min;
}

int main(){
	int max, min, lengde;
	//defierer verdier til arrayet
	int tall[10] = {3,12,45,6,2344,23,6,2,7,12};
	//størrelsen på tall
	lengde = sizeof(tall)/sizeof(int);

	minogmax(tall,lengde,&max,&min);
	printf("Max: %d\nMin: %d\n",max, min);
}
