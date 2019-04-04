/*Oppgave 7.9
  Lag en frasegenerator som genererer tilfeldige setninger.
Du må da ha en samling ord i ulike kategorier, for eksempel substantiver, verb og preposisjoner.
Du må også bestemme en eller flere grammatikker for lovlige setninger grammatikk. For eksempel [substantiv verb preposisjon substantiv].
Trekk så tilfeldige ord fra hver kategori. og settes sammen til en setning utfra valgt gramatikk.

Eksempel (pseudokode):
substantiver={”jenta”, ”trikken”, ”elgen”, ”blomsten”, ”mobiltelefonen”, ”katten”}
verb={”spiste”, ”løp”, ”klatret”, ”syklet”, ”sov”, ”mediterte”}
preposisjoner={”foran”, ”bak”, ”under”, ”over”, ”gjennom”}

Et tilfeldig trekk kan nå gi for eksempel:
trikken syklet over elgen
eller
blomsten løp gjennom mobiltelefonen

Oppgaven er inspirert av http://svadagenerator.no/
Det finnes flere slike nettsider og en student ved NTNU skal ha produsert en hjemmeeksamen på dette viset: http://dusken.no/artikkel/22328/sensor-ma-ha-trillet-terning/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define LEN 6

char *substantiver[] = {"jenta", "trikken", "elgen", "blomsten", "mobiltelefonen","katten"};
char *verb[] = {"spiste", "loep", "klatret", "syklet", "sov", "mediterte"};
char *preposisjoner[] = {"ved siden av","foran", "bak", "under", "over","gjennom"};

int main(void){
	srand(time(NULL));
	int randosub = rand()%6;
	int randover = rand()%6;
	int randopre = rand()%6;
	int randosub2 = rand()%6;
	printf("\n%d %d %d\n", randosub,randover,randopre);
	printf("\n%s %s %s %s\n",substantiver[randosub],verb[randover],preposisjoner[randopre],substantiver[randosub2]); 
	return 0;
}

