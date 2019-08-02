#include<stdio.h>
#include<string.h>

struct futbolcu
{
	char ad[20];
	char takim[50];
	int yas;
};

struct tarih
{
	char date[20];
	
}t={"20.02.2014"};

void listele(struct futbolcu x,struct tarih y);

int main()
{
	struct futbolcu f={"Arif Erdem","Galatasaray",40};
	
	listele(f,t);
}

void listele(struct futbolcu x,struct tarih y)
{
	printf("Ad    : %s\n",x.ad);
	printf("Takim : %s\n",x.takim);
	printf("Yas   : %d\n",x.yas);
	printf("Tarih : %s\n",y.date);
	
}
