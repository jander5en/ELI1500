#include <stdio.h>
#include <stdlib.h>

int main()
{
	float radius, areal;
	printf("Skriv inn radien av sirkelen: ");
	scanf("%f", &radius);

	areal = (radius*radius)*3.14;

	printf("\n\nArealet av sirkelen er: %3.2f", areal);

    return 0;

}
