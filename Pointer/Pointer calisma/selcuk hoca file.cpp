#include<stdio.h>
#define SIZE 4

struct calisanlar
{
	int numara;
	char *isim;
	int maas;
}dizi1[SIZE],dizi2[SIZE];

int main()
{
	FILE *f1,*f2,*f3;
	
	f1=fopen("dosya1","w");
	f2=fopen("dosya2","w");
	
	dizi1[0].numara=1;
	dizi1[0].isim="Adem";
	dizi1[1].numara=2;
	dizi1[1].isim="Zahit";
	dizi1[2].numara=3;
	dizi1[2].isim="Yunus";
	dizi1[3].numara=4;
	dizi1[3].isim="Mucahit";
	
	dizi2[0].numara=3;
	dizi2[0].maas=2500;
	dizi2[1].numara=2;
	dizi2[1].maas=4000;
	dizi2[2].numara=1;
	dizi2[2].maas=7000;
	dizi2[3].numara=4;
	dizi2[3].maas=10000;
	
	int i,j;
	for(i=0;i<4;i++)
	{
		fprintf(f1,"%d %s\n",dizi1[i].numara,dizi1[i].isim);
		fprintf(f2,"%d %d\n",dizi2[i].numara,dizi2[i].maas);
	}
	
	fclose(f1);
	fclose(f2);
	
	f1=fopen("dosya1","r");
	f2=fopen("dosya2","r");
	f3=fopen("dosya3","w");
	
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(dizi1[i].numara==dizi2[j].numara)
			{
				fprintf(f3,"%d %s %d\n",dizi1[i].numara,dizi1[i].isim,dizi2[j].maas);
			}
		}
	}
	
}
