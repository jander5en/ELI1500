#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	while((i*i) < 5000){
		i++;
	}	
	printf("det minste kvadratet over 5000 er: %d^2 \n", i);
    
	return 0;
}
