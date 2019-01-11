#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	double produkt;
	produkt = 1.0;

    printf("Fakultetet for tallene 1! til 50!\n");
	for(i = 1;i <= 50; i++){
		for(j = 1;j <= i;j++)
			produkt = produkt * (double)j;
		printf("\n%d! = %.0lf", i, produkt);
		produkt = 1.0;
	}
    return 0;
}
