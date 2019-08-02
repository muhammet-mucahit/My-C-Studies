#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct kart
{
	const char *taraf;
	const char *takim;
};

typedef struct kart Kart;

void desteDoldur(Kart *const,const char *[],const char *[]);
void desteyiKar(Kart * const);
void dagit(const Kart * const);

int main()
{
	Kart deste[52];
	
	const char *taraf[]={"As","Bir","Iki","Uc","Dort","Bes","Alti","Yedi","Sekiz","Dokuz","On","Vale","Kiz","Papaz"};
	const char *takim[]={"Kupa","Karo","Sinek","Maca"};
	
	srand(time(NULL));
	
	desteDoldur(deste,taraf,takim);
	desteyiKar(deste);
	dagit(deste);
	
}

void desteDoldur(Kart *const wDeste,const char *wTaraf[],const char *wTakim[])
{
	int i;
	
	for(i=0;i<=51;i++)
	{
		wDeste[i].taraf=wTaraf[i%13];
		wDeste[i].takim=wTaraf[i/13];	
	}
}
void desteyiKar(Kart *const wDeste)
{
	int i,j;
	Kart gecici;
	
	for(i=0;i<=51;i++)
	{
		j=rand()%52;
		gecici=wDeste[i];
		wDeste[i]=wDeste[j];
		wDeste[j]=gecici;
	}
}

void dagit(const Kart *const wDeste)
{
	int i;
	for(i=0;i<=51;i++)
	{
		printf("%5s %-8s%c",wDeste[i].takim,wDeste[i].taraf,(i+1)%2 ? '\t' : '\n');
	}
}

