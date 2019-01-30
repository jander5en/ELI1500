/* Oppgave 5.2
Konvertering fra hex til dec:

Lag et program som

    leser inn et heksadesimalt tall hextall
        bruk %xi innlesingen
    konverterer hextalltil 101010-tallsystemet
    skriverer ut det konverterte tallet
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hextall;

    printf("les inn et heltall:\n");
	scanf("%x",&hextall);
    printf("\ntallet i hex: %x og i desimalt: %d\n", hextall,hextall);
    return 0;
}
