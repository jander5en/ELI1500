
/*Oppgave 10.4
I denne oppgaven skal det beregnes forekomst (frekvens) for enkeltbokstaver i en tekst.

Teksten kan velges fritt. 1500-tallsteksten Lorem Ipsum.txt kan også benyttes (men den har ikke æ, ø og å).

Frekvensen har måles ved å summere antall ganger en bokstav opptrer og normalisere resultatet ved å dividiere med antall bokstaver i teksten.

Figuren under viser frevensen for de ulike bokstavene i engelsk språk.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	FILE *lorem_ipsum = fopen("lorem_ipsum.txt","r");

	float alfabet[26] = {0.0}, x = 0.0;
	int i = 0;
	char c = 0;

	while((c = fgetc(lorem_ipsum)) != EOF){
		if(isalpha(c)){
			c = tolower(c);
			alfabet[(int)(c-'a')]++;	
			x++;
		}
	}
	for(int i = 0;i < 26;i++)
		if(alfabet[i])
			printf("%c: har %.2f%%\n",'a'+i,((alfabet[i])/x)*100);
		else
			printf("%c: forekommer ikke\n",'a'+i);

	return 0;

}
