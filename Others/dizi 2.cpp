#include<stdio.h>
#define OGRENCILER 3
#define SINAVLAR 4

int minimum(const int [][SINAVLAR],int,int);
int maximum(const int [][SINAVLAR],int,int);
double ortalama(const int [],int);
void diziyiYazdir(const int [][SINAVLAR],int,int);

int main()
{
	int ogrenci;
	const int ogrenciNotlari[OGRENCILER][SINAVLAR]={{77,68,86,73},{96,87,89,78},{70,90,86,81}};
	
	printf("Dizi : \n\n");
	
	diziyiYazdir(ogrenciNotlari,OGRENCILER,SINAVLAR);
	printf("\nEn dusuk not : %d\n",minimum(ogrenciNotlari,OGRENCILER,SINAVLAR));
	printf("En yuksek not : %d\n",maximum(ogrenciNotlari,OGRENCILER,SINAVLAR));
	
	for(ogrenci=0;ogrenci<=OGRENCILER-1;ogrenci++)
	{
		printf("\nOgrenci %d icin ortalama not %.2f\n",ogrenci,ortalama(ogrenciNotlari[ogrenci],SINAVLAR));
	}
}

double ortalama(const int notlarinKumesi[],int testler)
{
	int i,toplam=0;
	
	for(i=0;i<testler;i++)
	{
		toplam+=notlarinKumesi[i];
	}
	
	return (double)toplam/testler;
}

int minimum(const int notlar[][SINAVLAR],int talebeler,int testler)
{
	int i,j,max=100;
	for(i=0;i<talebeler;i++)
	{
		for(j=0;j<testler;j++)
		{
			if(notlar[i][j]<=max)
			{
				max=notlar[i][j];
			}
		}
	}
	return max;
}

int maximum(const int notlar[][SINAVLAR],int talebeler,int testler)
{
	int i,j,max=0;
	for(i=0;i<talebeler;i++)
	{
		for(j=0;j<testler;j++)
		{
			if(notlar[i][j]>=max)
			{
				max=notlar[i][j];
			}
		}
	}
	return max;
}

void diziyiYazdir(const int notlar[][SINAVLAR],int talebeler,int testler)
{
	int i,j;
	
	printf("                  [0]    [1]    [2]    [3]\n");
	
	for(i=0;i<talebeler;i++)
	{
		printf("\nogrenciNotlari[%d]",i);
		for(j=0;j<testler;j++)
		{
			printf(" %-5d ",notlar[i][j]);
		}
		printf("\n");
	}
}


