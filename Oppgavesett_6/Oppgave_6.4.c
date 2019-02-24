/* Oppgave 6.4
Lag en funksjon

void sirkel (float radius, float *omkrets, float *areal)

Funksjonen mottar radius som parameter.

Omkrets og areal av sirkel returneres til variablene som omkrets og areal peker
på.o*/

#include <stdio.h>
#define PI 3.14

void sirkel(float radius, float *omkrets, float *areal){
	*omkrets = 2.0*PI*radius;
	*areal = PI*radius*radius;	
}

int main(){
	float omkrets;
	float areal;
	float radius = 10.0;

	sirkel(radius, &omkrets, &areal);
	printf("Med radius %.2f er omkretsen %.2f og arealet %.2f",radius,omkrets,areal);
}
