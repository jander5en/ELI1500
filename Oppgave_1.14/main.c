#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int input, resultat, tall;

	resultat = 0;
	srand(time(NULL));
	tall = rand()%100;	
	
    printf("Gjett et tall mellom 0 og 100\n");
	while(resultat == 0){
		scanf("%d", &input);
		
		if(input > tall)
			printf("\nTallet er lavere");
		else if(input < tall)
			printf("\nTallet er høyere");
		else{
			printf("Riktig! %d er tallet! :-)", input);
			resultat = 1;
		}
	}	
    return 0;
}
