/*Oppgave 4.1
I denne oppgaven skal det lages et program som leser inn temperaturverdier for en en uke. Det er en temperaturverdi per dag.

Verdiene som skal leses fra tastaturet er :

-1, -3, -10, -5, 0, 1, 2 

    Start med å definere et array:

int temperatur[7]

    Les inn temperaturene. Dette kan løses med å bruke enten
        en løkke, eller
        en enkelt innlesingssetning. 
    TIl slutt skal temperaturene skrives til skjerm med en passende formattering.
*/

#include <stdio.h>
#include <stdlib.h>

//Versjon 1:
int main(){
	int temperatur[7];	
	int i;
	
	//Les inn temperaturene til en array
	printf("Legg inn temperaturene: -1, -3, -10, -5, 0, 1, 2\n");
	scanf("%d %d %d %d %d %d %d", &temperatur[0], &temperatur[1], &temperatur[2], &temperatur[3], &temperatur[4], &temperatur[5], &temperatur[6]);

	printf("\ntemperaturene som ble lagt inn var: ");
	for(i = 0; i <= 6;i++){
		printf("%d", temperatur[i]);
		if(i < 6)
			printf(", ");
	}
	printf("\n");
}


/*Versjon 2:
int main()
{
	char temp[11][2];
	char c;
	int i, j;
	
	printf("Legg inn 10 temperaturverdier (2 sifrede): \n");	
	for(i = 0;i <= 10;i++){
		j = 0;
		//hent inn verdier som enkeltkarakterer
		while((c = getchar()) != 10){
			//Hvis j teller over i vil det generere en feil
			if(j > 1)
				break;
			//Skriver bare til listen hvis det er et heltall
			if(c > 47 && c < 58)	
				temp[i][j] = c;
			j++;
		}
	}
	
	printf("\nTemperaturene som ble lagt inn er:\n");	
	for(i = 0;i <= 10;i++){
		j = 0;
		//Skriv ut hver substreng på 2 karakterer hver
		while(temp[i][j] != '\0' && j < 2){
			printf("%c",temp[i][j]);
			j++;
		}
		if(i < 10)
			printf(", ");
	}
    
	return 0;
}
*/
