#include <stdio.h>
#include <stdlib.h>

int main()
{
	int end, sum, input, antall, max, min;
	float average;
	input = end = sum = antall = max = 0;
	min = 100;
	
    printf("Legg inn verdiene for nedbør dag for dag i perioden 1.1.18 - 1.2.18: \n");

	while(antall < 31 && end == 0){
		++antall;
		printf("\nmm Nedbør for %d.1.18: ", antall);
		scanf("%d", &input);
		if(input < 0){
			end = 1;
			break;
		}

		if(input > max)
			max = input;
		if(input < min)
			min = input;
		sum = sum + input;	

		input = 0;


	}

	average = (float)sum/antall;
	printf("I perioden 1.1.18 tom %d.1.18:\n",antall);
	printf("Max nedbør: %d\nMin nedbør: %d\nGjennomsnittsnedbør: %2.2f", max, min,
			average);

    return 0;
}
