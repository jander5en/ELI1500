
/*Oppgave 9.2
Deklarer

struct klokkeslett{ 
    int time; 
    int minutt; 
    int sekund; }; 

Lag et program der du leser inn verdier i variablene
struct klokkeslett start
og
struct klokkeslett slutt

Programmet skal så skrive ut hvor stort tidsintervallet mellom disse klokkeslettene er.
Eksempel:
Dersom start={8,30,0} og slutt={10,15,40} skal programmet skrive ut

1 time 45 minutter  40 sekunder
*/
#include <stdio.h>

	typedef struct klokkeslett{
		int time;
		int minutt;
		int sekund;
	} Klokkeslett;

struct klokkeslett klokkeregning(struct klokkeslett start, struct klokkeslett slutt){
	Klokkeslett regner;
		regner.time = slutt.time - start.time;	
		regner.minutt = slutt.minutt - start.minutt;	
		regner.sekund = slutt.sekund - start.sekund;
		if(regner.sekund < 0){
			regner.sekund+=60;
			regner.minutt-=1;
		}
		if(regner.minutt < 0){
			regner.minutt+=60;
			regner.time-=1;
		}
		
	return regner;

}

int main(){
	Klokkeslett start, slutt, tidsbruk;	
	printf("Skriv inn start tid; time.minutt.sekund: ");
	scanf("%d.%d.%d",&start.time, &start.minutt, &start.sekund);

	printf("Skriv inn slutt tid; time.minutt.sekund: ");
	scanf("%d.%d.%d",&slutt.time, &slutt.minutt, &slutt.sekund);

	if(start.time > slutt.time)
		printf("start tiden må være før slutt tiden");
	else if(start.time < slutt.time)
		tidsbruk = klokkeregning(start, slutt);
	else if(start.time == slutt.time)
		if(start.minutt == slutt.minutt)
			if(start.sekund == slutt.sekund)
				printf("start og slutt er på samme tid");
			else if(start.sekund > slutt.sekund)
				printf("start tiden må være før slutt tiden");
			else if(start.sekund < slutt.sekund)
				tidsbruk = klokkeregning(start, slutt);
		else if(start.minutt < slutt.minutt)
				tidsbruk = klokkeregning(start, slutt);
		else if(start.minutt > slutt.minutt)
			printf("start tiden må være etter slutt tiden");
	
	printf("\nTotal tid er %d timer %d minutt og %d sekund", tidsbruk.time, tidsbruk.minutt, tidsbruk.sekund);

	return 0;

}

