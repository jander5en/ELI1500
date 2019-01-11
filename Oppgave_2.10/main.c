#include <stdio.h>
#include <stdlib.h>

//Hvordan bruke æøå osv med dette?

int main()
{
	unsigned char input;
	int check;
	
	printf("Skriv inn en bokstav: ");
	scanf("%c", &input);
	//input = getchar();
	//input = fgetc(stdin);
	//check = (int)input;
	//printf("%d\n", check);
	//printf("%c\n", input);
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
			/* Tar ut disse da jeg ikke får til å lese disse enda..
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
			printf("%c er ikke en vokal\n", input);
			break;
		}
    return 0;
}
