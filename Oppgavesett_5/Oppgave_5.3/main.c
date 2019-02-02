/*Oppgave 5.3
Logiske "bitvise" operasjoner.

I denne oppgaven skal de logiske operasjonene AND, OR og XOR testes.

På norske:OG, ELLER, og EKSLUSIV ELLER

Lag et program som leser inn to heltall xog y. Skriv ut de resultat av de oppgitte operasjonene brukt på de to tallene.

I testfasen kan det være lurt å la x og yvære små.

Sjekk at programmet kan gi resultatet under.

x = 3, y = 5

  3 AND 5 gir 1 
  3 OR  5 gir 7
  3 XOR 5 gir 6

Kan du forklare resultatet?

Hint:

 3 -> 011 

 5 -> 101

 011 AND 101 -> 001
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int x, y;
	x = 0;
	y = 0;


	printf("Legg inn to positive verdier for å få resultatet av bitoperasjonene and or og xor:\n");

	scanf("%d %d",&x, &y);
	//Output her er de logiske operasjonene gjort på tallene ved å sammenlikne
	//bitene enkeltvis med hverandre.
    printf("%d AND %d gir %d\n", x, y, (y & x));
    printf("%d OR %d gir %d\n", x, y, (y | x));
    printf("%d XOR %d gir %d\n", x, y, (y ^ x));

    return 0;
}






