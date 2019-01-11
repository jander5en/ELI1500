#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	float sumpos, sumneg, a, b, c;

	a = b = c = sumpos = sumneg = 0.0;

    printf("legg inn verdiene abc i utrykket ax^2+bx+c=0\n");
	while(a == 0.0 || b == 0.0 || c == 0.0){
		if(a == 0.0){
			printf("\na: ");
			scanf("%f",&a);
		}	
		if(b == 0.0){
			printf("\nb: ");
			scanf("%f",&b);
		}
		if(c == 0.0){
			printf("\nc: ");
			scanf("%f",&c);
		}
	}

	if(pow(b,2) < (4*a*c))
		printf("Ingen reelle røtter");	
	else if(pow(b,2) == (4*a*c)){	
		sumpos = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		printf("En rot: %1.2f", sumpos);
	}
	else{	
		sumpos = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		sumneg = (-b-sqrt(pow(b,2)-4*a*c))/(2*a); 
		printf("To reelle røtter: %1.2f og %1.2f", sumpos, sumneg);	
	}
	

	
    return 0;
}
