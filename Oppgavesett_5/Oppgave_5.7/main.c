/* Oppgave 5.7
Programmet

#include <stdio.h>

int main(void)
{
  int i, x=1;
  
  for (i=1;i<=10;i++)
  {
    printf("?", x);
    x = ?;
  }
}

skal produsere utskriften

0000000001
0000000010
0000000100
0000001000
0000010000
0000100000
0001000000
0010000000
0100000000
1000000000

Hva skal stå på de stedene i programmet som er marker med "?". Det vil si: erstatt ? slik at programmet virker og gir korrekt utskrift.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, maske=1, x=1;
	for(i = 10;i >= 0;i--){
		if(maske&(1 << i))
			printf("1");
		else
			printf("0");
		printf("%d ",maske);
		maske = x << i;	
		printf("%d ",maske);
		
	//	printf("%d ", maske);
	}
	return 0;
}

