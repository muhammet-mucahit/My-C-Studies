#include<stdio.h>
#include<string.h>

struct futbolcu
{
	char ad[20];
	char takim[50];
	int yas;
};

struct sehirler
{
	char ad[20];
	int nufus;
};

int main()
{
	
	struct sehirler s[5]=
	{
		{"Ankara",250000},
		{"Istanbul",245000},
		{"Erzincan",220000},
		{"Ostrava",280000},
		{"Antalya",230000},
		
	};
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s -- %d\n",s[i].ad,s[i].nufus);
	}
	
	printf("\n\n\n");
	
	struct sehirler *sPtr=&s[0];
	
	for(i=0;i<5;i++)
	{
		printf("%s - %x - %d - %x \n",sPtr->ad,sPtr->ad,sPtr->nufus,sPtr->nufus);
		sPtr++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	struct futbolcu f;
	strcpy(f.ad,"Arif Erdem");
	strcpy(f.takim,"Galatasaray");
	f.yas=40;
	
	printf("Ad    : %s\n",f.ad);
	printf("Takim : %s\n",f.takim);
	printf("Yas   : %d\n\n",f.yas);
	
	struct futbolcu *fPtr=&f;
	
	printf("Ad    : %s\n",(*fPtr).ad);
	printf("Takim : %s\n",(*fPtr).takim);
	printf("Yas   : %d\n\n",(*fPtr).yas);
	
	printf("Ad    : %s\n",fPtr->ad);
	printf("Takim : %s\n",fPtr->takim);
	printf("Yas   : %d\n\n",fPtr->yas);
	*/
}
