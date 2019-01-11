#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 38;
	int f;
	float conv;
	
	conv = (float)9/5;
	f = (conv*c + 32);
    printf("%d er ca. %d fahrenheit",c,f);
    return 0;
}
