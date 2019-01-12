/*Oppgave 2.2
I denne oppgaven skal vi lete etter et heltall som oppfyller gitte betingelser:

    Finn det minste heltallet nnn slik at n2>5000n^2 > 5000n2>5000. 

    Siden vi blir bedt om å finne det minste heltallet kan vi bruke en løkke der tellevariabelen starter på n=1n = 1n=1
    Vi regner så ut N=n2N = n^2N=n2. Dersom N>5000N > 5000N>5000 så skriver vi ut tallet NNN

Tips: Det er naturlig å benytte seg av en while-løkke.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	//løkken avbrytes når resultatet i*i er større enn 5000
	while((i*i) < 5000){
		i++;
	}	
	printf("det minste kvadratet over 5000 er: %d^2 \n", i);
    
	return 0;
}
