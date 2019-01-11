#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;

    printf("\nSriv inn tallet som skal evalueres: ");
	scanf("%d", &x);
	if(x>0)
		printf("x er positiv");
	else if(x==0)
		printf("x er lik 0");
	else if(x<0)
		printf("x er negativ");
    return 0;
}
