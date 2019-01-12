/*Oppgave 3.10
Denne kan vente til etter gruppeøvingen.

Lag en funksjon

int primtall (int x)

som returnerer 1 når xxx er et primtall null ellers. Bruk funksjonen til å skrive ut alle primtall under 100.
*/

#include <stdio.h>
#include <stdlib.h>

int primtall(int x){
	int j, result;
	
	if(x > 4){
		result = 1;	
		for(j = 4;j < x;j++){
			if((x % j) == 0){
				result = 0;
				break;
			}
		}
	}
	else
		if(x == 0 || x == 1 || x == 4)
			result = 0;
		else if(x == 2 || x == 3)
			result = 1;

	return result;
}

int main()
{
	int i;	
	
	printf("Skriver ut alle primtall under 100:\n\n");
	
	for(i = 1; i <= 100;i++)
		if(primtall(i) == 1)
			printf("%d\n",i);

    return 0;
}
