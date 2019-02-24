/*Oppgave 6.5
Lag en funksjon

void byttom(int *x, int *y)

som bytter om verdiene på variablene som x og y peker på.

Lag et program som tester funksjonen.

Eksempel: * Vi har variablene a=3 og b=5. * Etter at vi har kjørt funksjonen byttom(&a,&b) skal a=5 og b=3. 
*/

#include <stdio.h>

void byttom(int *x, int *y){
	int buff = *y;
	*y = *x;
	*x = buff; 
}

int main(){

	int x = 4;
	int y = 2;
	printf("x = %d , y = %d\n", x, y);
	byttom(&x, &y);
	printf("x = %d , y = %d\n", x, y);
}

