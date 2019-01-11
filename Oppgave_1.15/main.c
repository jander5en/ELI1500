/*Oppgave 1.15
En annengradslikning kan skrives på formen

a⋅x2+b⋅x+c=0a\cdot x^2 + b\cdot x + c = 0 a⋅x2+b⋅x+c=0

Lag et program som leser inn koeffisientene a, b og c, og løser likningen over.

Tips:

x=−b±b2−4ac2ax = \frac{-b \pm\sqrt{b^2-4ac}}{2a} x=2a
−b±b2−4ac

​​

Du kan begrense deg til å skrive ut reelle røtter.

    b2>4acb^2 > 4acb2>4ac : Gir to reelle røtter.
    b2=4acb^2 = 4acb2=4ac : Gir en reelle rot.
    b2>4acb^2 > 4acb2>4ac : Gir to imaginære røtter.
*/	

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	float sumpos, sumneg, a, b, c;
	a = b = c = sumpos = sumneg = 0.0;

    printf("legg inn verdiene abc i utrykket ax^2+bx+c=0\n");
	//For å regne ut abc formelen trengs tallverdier for a, b og c
	//løkken kjører så lenge a, b eller mangler en verdi
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
	
	//Sjekker først om verdiene gir reelle røtter
	if(pow(b,2) < (4*a*c))
		printf("Ingen reelle røtter");	
	else if(pow(b,2) == (4*a*c)){	
		sumpos = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		printf("En rot: +/-%1.2f", sumpos);
	}
	else{	
		sumpos = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		sumneg = (-b-sqrt(pow(b,2)-4*a*c))/(2*a); 
		printf("To reelle røtter: %1.2f og %1.2f", sumpos, sumneg);	
	}
	

	
    return 0;
}
