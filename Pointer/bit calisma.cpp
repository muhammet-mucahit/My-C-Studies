#include<stdio.h>
#define SIZE 2

struct number
{
	int sayi;
	int tur;
};

void yazdir(struct number a);

int main()
{
	struct number dizi[SIZE];
	
	dizi[0].sayi=12;
	dizi[0].tur=0;
	dizi[1].sayi=8;
	dizi[1].tur=1;
	
	yazdir(dizi[0]);
	printf("\n\n\n");
	yazdir(dizi[1]);
	
}

void yazdir(struct number a)
{
	int bit=1;
	if(a.tur==0)
	{
		while(bit<=a.sayi)
		{
			putchar(a.sayi & bit ? '1':'0' );
			bit<<=1;
		}
		
	}
	
	else if(a.tur==1)
	{
		bit<<=30;
		while(bit>0)
		{
			putchar(a.sayi & bit ? '1':'0');
			bit>>=1;
		}
	}
	
	else
	{
		printf("Yaragi yedin");
	}
}
