/*Oppgave 2.6
Lag et program der en løkke skriver ut fakultetet n!n!n! for verdier av nnn fra 1 og opp til og med 50. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	long double produkt;
	produkt = 1.0;

    printf("Fakultetet for tallene 1! til 50!\n");
	//teller først ut tallene fra 1 til 50
	for(i = 1;i <= 50; i++){
		//regner ut fakultetet for hver tall i
		for(j = 1;j <= i;j++)
			produkt = produkt * (double)j;
		//skriver ut og resetter
		printf("\n%d! = %.4Le", i, produkt);
		produkt = 1.0;
	}
    return 0;
}
