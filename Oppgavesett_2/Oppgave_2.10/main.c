/*Oppgave 2.10
Lag et program som

    leser inn en bokstav
    sjekker om bokstaven er en vokal og
            skriver ut bokstaven og  er en vokal dersom bokstaven er en vokal
            skriver ut bokstaven og  er ikke en vokal dersom bokstaven ikke er en vokal

Bruk en switch setning. Test programmet ved å lese inn for eksempel tre bokstaver og skriv ut for hver innlesing. Du kan bruke funksjonen getchar() til innlesingen, eller scanf(«%c»,…) 
*/

#include <stdio.h>
#include <stdlib.h>

//Hvordan bruke æøå osv med dette? utf-8 eller noe?

int main()
{
	unsigned char input;
	int check;
	
	printf("Skriv inn en bokstav: ");
	//Forskjellige måter å ta input
	scanf("%c", &input);
	//input = getchar();
	//input = fgetc(stdin);
	//check = (int)input;
	//printf("%d\n", check);
	//printf("%c\n", input);

	//switch for å teste definerte tilfeller av input. gir case for hver vokal,
	//eller ikke vokal
	switch(input){
		case 'a':
			printf("%c er en vokal", input);
			break;
		case 'A':
			printf("%c er en vokal", input);
			break;
		case 'e':
			printf("%c er en vokal", input);
			break;
		case 'E':
			printf("%c er en vokal", input);
			break;
		case 'i':
			printf("%c er en vokal", input);
			break;
		case 'I':
			printf("%c er en vokal", input);
			break;
		case 'o':
			printf("%c er en vokal", input);
			break;
		case 'O':
			printf("%c er en vokal", input);
			break;
		case 'u':
			printf("%c er en vokal", input);
			break;
		case 'U':
			printf("%c er en vokal", input);
			break;
		case 'y':
			printf("%c er en vokal", input);
			break;
		case 'Y':
			printf("%c er en vokal", input);
			break;
			/* Tar ut disse da jeg ikke får til å lese disse..
		case 'æ':
			printf("%c er en vokal", input);
			break;
		case 'Æ':
			printf("%c er en vokal", input);
			break;
		case 'ø':
			printf("%c er en vokal", input);
			break;
		case 'Ø':
			printf("%c er en vokal", input);
			break;
		case 'å':
			printf("%c er en vokal", input);
			break;
		case 'Å':
			printf("%c er en vokal", input);
			break;
			*/
		default:
			printf("%c er ikke en vokal, evt ikke en ascii bokstav\n", input);
			break;
		}
    return 0;
}
