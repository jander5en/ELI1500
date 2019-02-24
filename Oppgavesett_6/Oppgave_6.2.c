
/* Oppgave 6.2
Lag et program med fire array:

int x[10]; 
long long y[10]; 
float z[10]; 
long double w[10];

Skriv ut adressene til elementene i arrayet x[0], x[1]…x[9] og tilsvarende for y,z og w.

Utskrift kan gjøres med %d i noen tilfeller, men det mest korrekte er %p.

Er det ett mønster i disse utskriftene? I så fall hva er mønsteret?
*/

#include <stdio.h>

int main(){
	int x[10];
	long long y[10];
	float z[10];
	long double w[10];


	printf("Navn\tAdresse\n");
	for(int i = 0;i<10;i++)
		printf("x[%d]\t%p\t\n", i, &x+i);
	printf("\n");
	for(int i = 0;i<10;i++)
		printf("y[%d]\t%p\t\n", i, &y+i);
	printf("\n");
	for(int i = 0;i<10;i++)
		printf("z[%d]\t%p\t\n", i, &z+i);
	printf("\n");
	for(int i = 0;i<10;i++)
		printf("w[%d]\t%p\t\n", i, &w+i);
}

