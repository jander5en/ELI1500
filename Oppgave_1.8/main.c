#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;

    printf("test om et heltall er et partall eller oddetall.\n\nLegg inn tallet: ");
	scanf("%d",&x);
	
	if(x%2 != 0)
		printf("tallet %d er et oddetall",x);
	else
		printf("tallet %d er et partall",x);
    return 0;
}
