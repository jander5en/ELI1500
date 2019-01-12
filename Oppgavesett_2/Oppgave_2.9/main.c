/*Oppgave 2.9
Lag et program som finner alle rettvinklede trekanter som har heltallige sidekanter mindre enn 100. Eksempel på en slik trekant er trekanten med sider 3, 4 og 5.

Les mer om rettvinklede trekanter og Pythagoras.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;

	printf("Rettvinklede trekanter med sider av heltall størrelse 100 og under:\n");
	//De mulige løsningene er en kube, derfor tell igjennom tre innlagte for løkker 
	//for å teste alle kombinasjoner og skriv ut de som passer til y^2=a^2+b^2
	for(i = 1;i <= 100;i++)
		for(j = 1;j <= 100;j++)
			for(k = 1;k <= 100;k++)
				if((j*j+i*i) == k*k)
					printf("%d, %d, %d\n", i, j, k);
    
	printf("\n");

    return 0;

}
