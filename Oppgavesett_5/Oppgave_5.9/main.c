/* Oppgave 5.9
Lag et program som leter etter et bestemt mønster av 3 bit i en unsigned int.

For eksempel:

    Tallet

    0xAAAAAAAA0xAAAAAAAA0xAAAAAAAA =10101010101010101010101010101010=10101010101010101010101010101010=10101010101010101010101010101010 inneholder mønstrene (101)(101)(101) og (010)(010)(010), men ingen andre. 

    Les inn bitmønsteret som en unsigned int med verdier 0-7.
    Les inn et tall (som unsigned int) og skriv ut om bitmøsteret forekommer i tallet eller ikke. 

Forslag:

    Bruk en maske som består av 3 enere, resten nuller.
    Test om masken og tallet er lik det mønsteret det søkes etter.
    Dersom testen over feiler, høyreskift tallet og prøv igjen.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    return 0;
}
