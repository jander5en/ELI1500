/*Oppgave 6.3
Dette er en todelt oppgave:

(I) Lag en funksjon etter følgende spesifikasjon:

Deklarasjon:

void s_og_p(int x, int y, int *sum, int *produkt)

Operasjoner:

    x+y legges inn i variabelen som sumpeker på
    x*y legges inn i variabelen som produkt peker på

(II) Skriv et program som tester funksjonen. 
*/

#include <stdio.h>

void s_og_p(int x, int y, int *sum, int *produkt){
	*sum = x + y;
	*produkt = x*y;
	printf("%d + %d = %d\n", x, y, *sum);
	printf("%d * %d = %d", x, y, *produkt);
}

int main(){
	int x = 4;
	int y = 3;
	s_og_p(x, y, &x, &y);
}
