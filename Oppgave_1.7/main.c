#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	x = y = 0;
    
	printf("sammenlikner to tall\n\nLegg inn det første tallet: ");
	scanf("%d",&x);
	printf("Legg inn det andre tallet: ");
	scanf("%d",&y);
	
	if(x>y)
		printf("Tallet %d er størst",x);
	if(x<y)
		printf("Tallet %d er størst",y);
	else if(x==y)
		printf("Tallene er like store");

    return 0;
}
