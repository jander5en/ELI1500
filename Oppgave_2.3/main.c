#include <stdio.h>
#include <stdlib.h>
//En litt lat løsning på denne... Gjør om hvis det blir en anledning
int main()
{
	int a, b, c, d, e, f, sum, input, antall;
	sum = input = antall = 0;

	printf("legg inn karakterene til prøvene:");
	for(antall = 1;antall <= 5; ++antall){
		printf("\npoengsum for prøve nr. %d: ", antall);	
		scanf("%d", &input);
		if(input == 'a')
			break;
		sum = sum + input;
		if(input >= 0 && input <= 39)
			printf("\nPrøve nr. %d har karakter F", antall);
		if(input >= 40 && input <= 49)
			printf("\nPrøve nr. %d har karakter E", antall);
		if(input >= 50 && input <= 59)
			printf("\nPrøve nr. %d har karakter D", antall);
		if(input >= 60 && input <= 79)
			printf("\nPrøve nr. %d har karakter C", antall);
		if(input >= 80 && input <= 89)
			printf("\nPrøve nr. %d har karakter B", antall);
		if(input >= 90 && input <= 100)
			printf("\nPrøve nr. %d har karakter A", antall);
	}
	a = (sum/5);	
    printf("\n\nGjennomsnittet er: %d \n", a);
    return 0;
}
