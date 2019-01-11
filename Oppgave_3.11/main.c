/*Oppgave 3.11
Et heltall sies å være perfekt dersom summen av faktorene (1 er medregnetl) er lik tallet.

Eksempel:

Tallet 6 er perfekt fordi det har faktorer:

1|6
2|6
3|6

og faktorene summeres til

1+2+3=6

Det neste perfekte tallet er 28

Lag en funksjon

int perfekt(int n)

som returnerer 1 hvis nnn er perfekt og 0 ellers. Bruk funksjonen til å skrive ut alle perfekte tall under 10000.
*/

#include <stdio.h>
#include <stdlib.h>

int perfekt(int n){
	int i, sum;
	i = sum = 0;

	for(i = 1;i < n;i++){
		if(n%i == 0){
			sum = sum + i;
		}
	}
	if(sum == n)
		return 1;
	else
		return 0;
}
int main()
{
    int j;
	
	printf("Printer ut en liste over perfekte tall:\n");
	for(j = 1;j <= 10000;j++)
		if(perfekt(j) == 1)
			printf("%d\n", j);
	
    return 0;
}
