#include <stdio.h>
#include <stdlib.h>

int whitespace(int ant){
	int i;
	for(i = 0;i < ant;i++)
		printf(" ");
	return 0;
}

int main()
{
	float cels, fahr;
	int i;

	i = -10;
	printf("Celsius    Fahrenheit\n");
	while(i < 11){
		cels = (float)i*10.0;
		fahr = ((float)9/5)*cels + 32.0;
		if(cels <= 0 && fahr <= 0)
			printf("%7.1f%14.1f\n", cels, fahr);
		else if(cels <= 0 && fahr > 0)
			printf("%7.1f         +%.1f\n", cels, fahr);
		else if(cels > 0 && fahr > 0){
			if(cels < 10)
				whitespace(3);
			else if(cels < 100)
				whitespace(2);
			else if(cels >= 100)
				whitespace(1);	
			printf("+%.1f",cels);

			if(fahr < 10)
				whitespace(10);
			if(fahr < 100)
				whitespace(9);
			if(fahr >= 100)
				whitespace(8);	
			printf("+%.1f\n",fahr);
		}



		i++;
	}
    printf("\n");
    return 0;
}
