/*

aşağıdaki sırala fonksinoyu "x" uzunluklu "ogrenci" tipinde bir diziyi numara sırasına göre küçükten büyüğe sıralaması gerekmektedir.

beklenen çıktı:

1	abuzittin
11	ucamayansuperkahraman
13	loremipsum
15	dutluk
19	at

*/

#include <stdio.h>

struct ogrenciler
{
	int numara;
	char *isim;
}liste[5];

void sirala(struct ogrenciler dizi[], int x);

int main() {
	liste[0].numara = 15;
	liste[0].isim = "dutluk";
	liste[1].numara = 13;
	liste[1].isim = "loremipsum";
	liste[2].numara = 19;
	liste[2].isim = "at";
	liste[3].numara = 11;
	liste[3].isim = "ucamayansuperkahraman";
	liste[4].numara = 1;
	liste[4].isim = "abuzittin";
	
	sirala(liste, 5);
	
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("%d\t%s\n", liste[i].numara, liste[i].isim);
	}
	
}

void sirala(struct ogrenciler dizi[], int x)
{
	
	struct ogrenciler gecici;

	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=x-1;j>=0;j--)
		{
			if(dizi[j].numara<dizi[j-1].numara)
			{
				gecici=dizi[j-1];
				dizi[j-1]=dizi[j];
				dizi[j]=gecici;
			}
		}
	}
	
	
	
}
