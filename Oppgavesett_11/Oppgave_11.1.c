
/* Oppgave 11
 Lag et program som får inn et navn (det vil si en tekststreng) som parameter til main(), og skriver ut

Velkommen <navn>!
*/

#include <stdio.h>

int main(int argc, char *argv[]){
	for(int i = 1;i<argc;i++)
		printf("Velkommen %s", argv[i]);
}
