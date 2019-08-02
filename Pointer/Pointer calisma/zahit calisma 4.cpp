//tokenize fonksiyonunun token olarak verilen ":" ya gore metin dizisini parçalayýp "liste" beklenmektedir
/*
beklenen çýktý

liste[0]  telefon
liste[1]  nokia
liste[2]  3310

*/
#include <stdio.h>


struct tokenler
{
	char tokencik[10];
	
}liste[3];

void tokenize(char *metin, char token, struct tokenler dizi[]);

int main() {

	char *yazi = "telefon:nokia:3310";

	tokenize(yazi, ':', liste);
	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("liste[%d]  %s\n",i, liste[i].tokencik);
	}
}

void tokenize(char *metin, char token, struct tokenler dizi[])
{
	int i,j,k;
	char gecici[10];
	char gecici2[10];
	char gecici3[10];
	
	for(i=0;*(metin+i)!=token;i++)
	{
		dizi[0].tokencik[i]=*(metin+i);
	}
	
	int c=0;
	for(j=i+1;*(metin+j)!=token;j++)
	{
		dizi[1].tokencik[c]=*(metin+j);
		c++;
	}
	
	int d=0;
	for(k=j+1;*(metin+k)!='\0';k++)
	{
		dizi[2].tokencik[d]=*(metin+k);
		d++;
	}
	
}
