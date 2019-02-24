/*Oppgave 6.10
void funksjon1(int xverdi)
{
    int x;
    x = xverdi;

    //skriv ut adressen til x og verdien til x

}

void funksjon2(int dummy)
{
    int y;

    //skriv ut adressen til y og verdien til y

}

int main()
{
    funksjon1(7);
    funksjon2(11);
    return 0;
}*/

#include <stdio.h>

void funksjon1(int xverdi){
	int x;
	int *xpeker = &x;
	x = xverdi;
	printf("x\t%p\t%d\n",&x,*xpeker);
}

void funksjon2(int yverdi){
	int y;
	int *ypeker = &y;
	y = yverdi;
	printf("y\t%p\t%d\n",&y,*ypeker);
}

void begge(){
	funksjon1(40);
	funksjon2(15);
}
void alle(){
	begge();
	funksjon1(50);
	funksjon2(20);
}

int main(){
	//minnet frigjøres etter funksjonene kjører? derfor vil den neste settes i
	//samme plass som den forrige?.
	printf("var\tadr\t\tverdi\n");
	funksjon1(7);
	funksjon2(11);
	int z = 9;
	int *zp = &z;
	printf("z\t%p\t%d\n",&z,*zp);
	funksjon1(3);
	funksjon2(1);
	begge();
	alle();
}
