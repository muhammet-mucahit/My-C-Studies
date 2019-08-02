/*

dosyalar� ��kartt���n�z yerde soru5-1 ve soru5-2 isimli iki dosya bulunmaktad�r
soru5-1: ��renci numaras� ve ��renci ad�n� i�erir
soru5-2: ��renci numaras� ve ��rencinin ald��� notu i�erir
senden istedi�im soru5-3 isimli bir dosya olu�turup di�er iki dosyan�n i�inde bulunup ayn� numaraya sahip olan ki�ileri e�leyip buraya eklemendir

beklenen soru5-3 isimli dosya i�eri�i:

1 ali 20
3 karaca 85
5 bisey 10
6 ingilizcembitti 60

*/

#include<stdio.h>
#define SIZE 7
struct ogrenciler
{
	int numara;
	char isim[15];
	int puan;
}dizi1[SIZE],dizi2[SIZE];



int main()
{
	FILE *f1,*f2,*f3;
	
	f1=fopen("sore5-1","r");
	f2=fopen("soru5-2","r");
	f3=fopen("soru5-3","w");
	
	int i=0,j=0;
	while(!feof(f1))
	{
		fscanf(f1,"%d%s",&dizi1[i].numara,&dizi1[i].isim);
		i++;
	}
	
	while(!feof(f2))
	{
		fscanf(f2,"%d%d",&dizi2[j].numara,&dizi2[j].puan);
		j++;
	}
	
	int k,d;
	
	for(k=0;k<SIZE;k++)
	{
		for(d=0;d<4;d++)
		{
			if(dizi1[k].numara==dizi2[d].numara)
			{
				fprintf(f3,"%d %s %d\n",dizi1[k].numara,dizi1[k].isim,dizi2[d].puan);
			}
		}
	}
	
}


