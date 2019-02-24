/*Oppgave 6.6
Lag et program som leser inn tre heltall: x,yx, yx,y og zzz.

Lag en funksjon

void bytte(int *xpeker, int *ypeker, int *zpeker);

som bytter om på tallene slik at x≤y≤zx\leq y\leq zx≤y≤z.

Oppgaven kan løses med tankegangen bak fir eksempel boblesortering. Det vil si:

    sammenlign xxx og yyy
    bytt om dersom de er i feil rekkefølge
    sammenlign yyy og zzz på samme måte
    sammenlign xxx og yyy igjen. 

Bruk funksjonen til å ordne tallene, og skriv ut resultatet for å kontrollere. 
*/

#include <stdio.h>

void bytte(int *xpeker, int *ypeker, int *zpeker){
	//setter verdiene inn i en array og kjører boblesortering
	int arr[3] = {*xpeker, *ypeker, *zpeker};
	int swopped = 1;
	while(swopped == 1){
		swopped = 0;
		for(int i = 0;i < 2;i++){
			if(arr[i+1] < arr[i]){
				int buff = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = buff;
				swopped = 1;
			}
		}
	}
	*xpeker = arr[0];
	*ypeker = arr[1];
   	*zpeker = arr[2];	
}

int main(){
	int x, y, z;

	x = 7;
	y = 5;
	z = 2;

	printf("Før bytte: x = %d, y = %d, z = %d\n", x, y, z);
	bytte(&x, &y, &z);
	printf("Etter bytte: x = %d, y = %d, z = %d\n", x, y, z);

}
