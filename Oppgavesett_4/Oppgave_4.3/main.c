/*Oppgave 4.3
I denne oppgaven skal det søkes etter et bestemt tall i et array av tilfeldige tall.

Tilfeldige tall kan trekkes fra en definert mengde. Dette gjøres ved å bestemme seg for minste og største tall.

    Definer int tilfeldig[10]
    Fyll tilfeldig med tilfeldige tall i mengden [1,20].
    Søk gjennom tilfeldig og undersøk om tallet 5 forekommer.
    Skriv ut resultatet. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 	int tilfeldig[10];	
	int i, funnet;
	funnet = 0;

	printf("Gerererer 10 tilfeldige tall mellom 1 og 20 og sjekker om noen av de er tallet 5:\n");
	//Genererer tilfeldige tall og legger de inn i arrayet	
	for(i = 0;i < 10;i++){
		srand(time(NULL)+i);
		tilfeldig[i] = rand()%20 + 1;
		printf("%d\n", tilfeldig[i]);
	}
	//Går igjennom tilfeldig[] og sjekker om tallet 5 er tilstede
	for(i = 0;i < 10;i++){
		if(tilfeldig[i] == 5 && funnet == 0){
			printf("5 er funnet");
			funnet = 1;
		}
	}
	//Hvis 5 ikke var i tilfeldig[] skrives en annen streng
	if(funnet == 0)
		printf("5 er ikke funnet");

	printf("\n");
    return 0;
}
