/* Oppgave 6.1
Programmet i denne oppgaven bruker følgende variabeldeklarasjon:

int x=2;
int y=5;
int *z;
int *w;

    Pekeren zskal peke på x.
    Pekeren wskal peke på y.
    Skriv ut
        adressene til variablene x og y,
        verdien av pekerne z og w,
        innholdet i adressene som z og w peker på ** og adressen til pekerne z og w. 
*/

#include <stdio.h>

int main(){
	int x = 2;
	int y = 5;
	int *z = &x;
	int *w = &y;
	printf("Navn\tAdresse\t\tverdi\n");
	printf("x\t%p\t%d\n", &z, x);
	printf("y\t%p\t%d\n", &w, y);
}

