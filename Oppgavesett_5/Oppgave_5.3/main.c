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
	int i;
	unsigned int result, x, y;
	x = 1;
	y = 3;

    printf("%d\n",(x << 0));
    printf("%d\n",(x << 1));
    printf("%d\n",(x << 2));
    printf("%d\n",(x << 3));
    printf("%d\n",(y << 0));
    printf("%d\n",(y << 1));
    printf("%d\n",(y << 2));
    printf("%d\n",(y << 3));
	for(i = 3;i >= 0;i--){
		if(x>0)
			printf("1");
		else
			printf("0");
	}
    printf("\n");
    return 0;
}






