/*Oppgave 2.1
I denne oppgaven skal resultatene skrives ut til skjerm i tabellform. Lag et program som

    har en for-løkke med tellervariabel iii som løper fra 1 til og med 10,
    skriver ut:
        iii
        i2i^2i2
        i3i^3i3

slik at utskriften blir omtrent slik:

     i    i*i   i*i*i

     1      1       1
     2      4       8
     3      9      27
     4     16      64
     5     25     125
     6     36     216
     7     49     343
     8     64     512
     9     81     729
    10    100    1000
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	printf("         i        i*i      i*i*i\n\n");

	//skriver ut i    i*i   i*i*i med kolonner på 10 i bredde
	for(i = 1; i <= 10; ++i)
    	printf("%10d %10d %10d\n", i, (i*i), (i*i*i));
    return 0;
}
