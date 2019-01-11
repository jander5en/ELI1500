#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("         i        i*i      i*i*i\n\n");
	for(i = 1; i <= 10; ++i)
    	printf("%10d %10d %10d\n", i, (i*i), (i*i*i));
    return 0;
}
