#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, input, produkt;
	produkt = 1;
    printf("Legg inn et tall for å regne ut fakultetet: ");
	scanf("%d", &input);
	for(i = 1;i <= input;i++)
		produkt = produkt * i;
	printf("\n%d! = %d\n", input, produkt);
    return 0;
}
