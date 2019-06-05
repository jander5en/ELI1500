
/*Oppgave 9.8
  Definer to strukturer som representerer et punkt og en linje:

struct punkt{
    float x;
    float y;
    };
struct linje{
    struct punkt p1;
    struct punkt p2;
};

Lag en funksjon

struct punkt skjaring(struct linje L1, struct linje L2)

som returnerer skjæringspunktet mellom linjene L1 og L2.

Hvis linjene ikke skjærer hverandre må funksjonen fortsatt returnere et punkt, velg en eller annen verdi , f.eks.(-99999,-99999).
*/
#include <stdio.h>

struct punkt{
    float x;
    float y;
};
struct linje{
    struct punkt p1;
    struct punkt p2;
};

struct punkt skjaring(struct linje L1, struct linje L2){
	struct punkt res;
	float p1,p2,x,y;
	float k1 = ((L1.p2.y-L1.p1.y)/(L1.p2.x-L1.p1.x));
	float k2 = ((L2.p2.y-L2.p1.y)/(L2.p2.x-L2.p1.x));
	p1=p2=x=y=0;
	
	if(k1==k2){
		res.x = -9999;
   		res.y = -9999;	
	}
	else{
		p1 = L1.p1.y-p1*L1.p1.x;
		p2 = L2.p1.y-p2*L2.p1.x;

		x = (k2-k1)/(p2-p1);
		y = p1*x+p1;

		res.x = x;
		res.y = y;
	}	
	return res;
};

int main(){
	struct linje L1 = {
		{2.0,2.0},
		{4.0,1.0}
	};
	struct linje L2 = {
		{1.0,3.0},
		{2.0,5.0}
	};
	struct punkt sp = skjaring(L1,L2);
	printf("[%.1f,%.1f]\n",sp.x,sp.y);
	
	return 0;
}
