#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x,y,input;

	srand(time(NULL));
	x = rand()%100;	
	y = rand()%100;	
    printf("Hva er %d + %d?\n", x, y);
	scanf("%d",&input);

	if(input == (x + y))
		printf("Riktig! %d + %d = %d", x, y, input);
	else
		printf("Feil. Riktig svar er %d", (x+y));
    return 0;
}
