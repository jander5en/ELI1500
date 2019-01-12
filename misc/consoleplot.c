#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Plotter en bestemt funksjon i konsollen med * symboler.
//Neste steg: en interface der man kan justere høyde lengde, velge type funksjon
//og legge inn verdiene. f.eks: ax + b eller ax^2 + bx + c

int main(){
	
	int i, j, k, x, y, hasprint, height, length;	
	length = 200;
	height = 200;
	hasprint = 0;
	//test hvert enkelt punkt i en 2D matrise om det er en løsning for likningen
	for(i = height;i >= 0;i--){
		printf("%3d |", i);
		for(j = 0;j < length;j++){
			x = j;
			y = i;
			//testen er funksjonen. Gjør om til x og y for å tydeligjøre
			if((x*x)/16 == y){
				printf("**");
				hasprint = 1;
			}
			else if(hasprint == 0 && j < length/2)
				printf("  ");
		}
		hasprint = 0;
		printf("\n");
	}
	printf("    ");
	for(k = 0;k <= length;k++)
		printf("-");
	printf("\n");

	printf("     ");
	for(k = 0;k <= length/2;k++)
		printf("%2d", k);
	printf("\n");

	return 0;

}
