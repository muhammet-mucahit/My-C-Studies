#include<stdio.h>
#include<string.h>

struct ogrenciler
{
	char ad[20];
	char bolum[50];
	int sinif;
	float ort;
	
};

struct TelRehber
{
	char ad[20];
	char sehir[20];
	int tel;
}tel[5];

int main()
{
	
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("%d - isim              : ",i); scanf("%s",&tel[i].ad);
		printf("%s in yasadigi sehir   : ",tel[i].ad); scanf("%s",&tel[i].sehir);
		printf("%s in telefon numarasi : ",tel[i].ad); scanf("%d",&tel[i].tel);
	}
	
	printf("\n\nREHBER\n\n");
	
	for(i=1;i<=5;i++)
	{
		printf("%s\t\t%s\t\t%d\n",tel[i].ad,tel[i].sehir,tel[i].tel);
	}
	
	/*
	struct ogrenciler ogr[]=
	{
		{"Ali","Kamu yonetimi",3,2.00},
		{"Mahmut","Iktisat",1,2.50},
		{"Ayse","Isletme",4,1.80}
	};
	
	printf("Ad      : %s\n",ogr[0].ad);
	printf("Sinif   : %s\n",ogr[0].bolum);
	printf("Bolum   : %d\n",ogr[0].sinif);
	printf("Ortalama: %.2f\n\n",ogr[0].ort);
	
	printf("Ad      : %s\n",ogr[1].ad);
	printf("Sinif   : %s\n",ogr[1].bolum);
	printf("Bolum   : %d\n",ogr[1].sinif);
	printf("Ortalama: %.2f\n\n",ogr[1].ort);
	
	printf("Ad      : %s\n",ogr[2].ad);
	printf("Sinif   : %s\n",ogr[2].bolum);
	printf("Bolum   : %d\n",ogr[2].sinif);
	printf("Ortalama: %.2f\n",ogr[2].ort);
	*/
	
	
	
}
