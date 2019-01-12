/*Oppgave 1.7
To heltall xxx og yyy kan ha følgnde logiske egenskaper

    x>y x > yx>y
    x=y x = yx=y
    x<y x < yx<y 

Lag et program som undersøker egenskapene over:

    Les inn to tall med passende ledetekst.
    Skriv ut hvilket tall som er størst; f.eks Tallet 18 er størst.
    Dersom tallene er like store skriver programmet ut Tallene er like store. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	x = y = 0;

	//Tar input x og y fra brukeren	
	printf("sammenlikner to tall\n\nLegg inn det første tallet: ");
	scanf("%d",&x);
	printf("Legg inn det andre tallet: ");
	scanf("%d",&y);

	//Evaluerer hvilket av tallene x og y som er størst	
	if(x>y)
		printf("Tallet %d er størst",x);
	if(x<y)
		printf("Tallet %d er størst",y);
	else if(x==y)
		printf("Tallene er like store");

    return 0;
}
