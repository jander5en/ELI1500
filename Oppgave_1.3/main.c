#include <stdio.h>
#include <stdlib.h>

int main()
{
	float pund,kilo;
	printf("Legg inn vekten i pund som skal konverteres: ");
	scanf("%f",&pund);
	kilo = pund*0.454;
	printf("\n%1.3f pund er %1.3f kilo", pund, kilo);
    return 0;
}
