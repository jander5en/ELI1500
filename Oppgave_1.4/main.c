#include <stdio.h>
#include <stdlib.h>

#define PVOKSNE 210
#define PBARN 150

int main()
{
    int voksne, barn, sum;
	voksne = barn = sum = 0;

	printf("Billettpriser for fornøyselsesparken\n\n");

	printf("Antall voksne: ");
	scanf("%d", &voksne);

	printf("\nAntall barn: ");
	scanf("%d", &barn);
	
	if(voksne != 0)
		sum = voksne*PVOKSNE;
	if(barn != 0)
 		sum = sum + barn*PBARN;

	printf("\nPrisen er %d NOK\n", sum);
		
    return 0;
}
