#include<stdio.h>
#define SIZE 4

struct ogrenciler
{
	int sira;
	char isim[20];
	char sehir[20];
	int numara;
}dizi1[SIZE],dizi2[SIZE];

int main()
{
	FILE *f1,*f2,*f3;
	
	f1=fopen("file1.txt","r");
	f2=fopen("file2.txt","r");
	f3=fopen("file3","w");
	
	int i=0;
	while(!feof(f1))
	{
		fscanf(f1,"%d%s%s",&dizi1[i].sira,&dizi1[i].isim,&dizi1[i].sehir);
		i++;
	}
	
	i=0;
	while(!feof(f2))
	{
		fscanf(f2,"%d%d",&dizi2[i].sira,&dizi2[i].numara);
		i++;
	}
	
	int j,k;
	
	for(j=0;j<SIZE;j++)
	{
		for(k=0;k<SIZE;k++)
		{
			if(dizi1[j].sira==dizi2[k].sira)
			{
				fprintf(f3,"%d\t%s\t%d\t%s\n",dizi1[j].sira,dizi1[j].isim,dizi2[k].numara,dizi1[j].sehir);
			}
		}
	}
	
	
	
	
}
