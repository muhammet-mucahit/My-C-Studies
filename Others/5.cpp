#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int ortalama(int *,int,float * );
int standart_sapma(int *,int,float,float * );

int main()
{
	float c;
	float d;
	int dizi[]={20,2,68,74,89,90,11,88,46,1};
	
	ortalama(dizi,10,&c);
	printf("%.1f\n",c);
	standart_sapma(dizi,10,c,&d);
	printf("%.2f",d);	
	
}

int ortalama(int *a,int b,float *d)
{
	int i;
	for(i=0;i<b-1;i++)
	{
		*d+=*(a+i);
	}
	return *d=*d/b;
}

int standart_sapma(int *dizi,int boyut,float ort,float *param1)
{
	int i;
	float toplam1=0;
	for(i=0;i<boyut-1;i++)
	{
		toplam1=toplam1+pow(ort-*dizi,2);
	}
	printf("%d\n",toplam1);
	
	return *param1=sqrt(toplam1/(boyut-1));
}
