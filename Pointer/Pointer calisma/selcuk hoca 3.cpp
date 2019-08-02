#include<stdio.h>
#define SIZE 10

struct number
{
	int sayi[SIZE];
	int tur;
}b;

void sirala(struct number *a);

int main()
{

	b.sayi[0]=1;
	b.sayi[1]=2;
	b.sayi[2]=3;
	b.sayi[3]=4;
	b.sayi[4]=5;
	b.sayi[5]=6;
	b.sayi[6]=7;
	b.sayi[7]=8;
	b.sayi[8]=9;
	b.sayi[9]=0;
	b.tur=1;
	
	sirala(&b);
	
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",b.sayi[i]);
	}
}

void sirala(struct number *a)
{
	int i,j,gecici;
	
	if(1)
	{
		for(i=0;i<SIZE;i++)
		{
			for(j=0;j<SIZE-1;j++)
			{
				if(a->sayi[j]<a->sayi[j+1])
				{
					gecici=a->sayi[j+1];
					a->sayi[j+1]=a->sayi[j];
					a->sayi[j]=gecici;
				}
			}
		}
	}
	

}





