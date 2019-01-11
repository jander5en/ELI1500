#include <stdio.h>
#include <stdlib.h>

#define VOKSENP 180
#define BARNP 100
#define RABATT 0.9
int main()
{
	int voksne, barn, sum;
	float rabattsum;
	voksne = barn = sum = 0;	

    printf("Beregn totalpris for en gruppe barn og voksne. Grupper på over 10 personer får 10%% rabatt.\n\nAntall Voksne: ");
	scanf("%d",&voksne);
	printf("\nAntall barn: ");
	scanf("%d",&barn);

	if(voksne != 0)
		sum = voksne*VOKSENP;
	if(barn != 0)
		sum = sum + barn*BARNP;
	if((voksne + barn) >= 10){
		rabattsum = (float)sum*RABATT;
		printf("Prisen med 10%% rabatt er: %3.2f", rabattsum);
	}
	else	
		printf("Prisen er %d", sum);
    return 0;
}
