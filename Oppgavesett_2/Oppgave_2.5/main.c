/*Oppgave 2.5
Lag et program som leser inn et heltall NNN og beregner fakultetet av dette. I beregningen av fakultet kan det være hensiktsmessig å opprette en variabel produkt eller liknende. I en løkke kan produkt multipliseres med tellevariabelen.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, input, produkt;
	produkt = 1;

    printf("Legg inn et tall for å regne ut fakultetet: ");
	scanf("%d", &input);
	//regner ut fakultet med en for løkke
	for(i = 1;i <= input;i++)
		produkt = produkt * i;
	printf("\n%d! = %d\n", input, produkt);

    return 0;
}
