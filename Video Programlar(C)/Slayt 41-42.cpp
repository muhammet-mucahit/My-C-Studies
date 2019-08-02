#include<stdio.h>

//fputs() --> Dosyaya bir karakter dizisi kaydeder.
//fprintf --> Dosyaya bicimlendirilmis veri kaydeder.

int main()
{
	
	FILE *dosya;
	/*
	dosya=fopen("deneme.txt","w");
	
	fputs("Merhaba Dunya",dosya);

	
	
	char isim[]="Zeynep";
	dosya=fopen("mucahit.txt","w");
	
	fprintf(dosya,"Bu dosya %s in dosyasidir.",isim);
	
	
	
	dosya=fopen("carpimtablosu.txt","w");
	
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			fprintf(dosya,"%d * %d = %d\n",i,j,i*j);
		}
		fprintf(dosya,"\n");
	}
	
	
	dosya=fopen("ogrenci.txt","w"); 
	
	char isim[20],okul[50],bolum[50];
	
	printf("Ad Soyad  : ");gets(isim); //scanf("%s",&ad); scanf bosluk gordugu an bellekte tutmayi keser.
	printf("Okulunuz  : ");gets(okul);
	printf("Bolumunuz : ");gets(bolum); 
	
	fprintf(dosya,"%s \t %s \t %s",isim,okul,bolum);
	
	
	dosya=fopen("merhaba.txt","a");
	
	fputs("\nMerhaba Dunya",dosya);
	*/
	
	dosya=fopen("ogrenci2.txt","a"); // w yazarsak her yeni birsey yazdigimizda dosyaya onceki veriyi kaybederdik. ornegi asagida.
	
	char isim[20],okul[50],bolum[50];
	
	printf("Ad Soyad  : ");gets(isim); //scanf("%s",&ad); scanf bosluk gordugu an bellekte tutmayi keser.
	printf("Okulunuz  : ");gets(okul);
	printf("Bolumunuz : ");gets(bolum); 
	
	fprintf(dosya,"%s \t %s \t %s\n",isim,okul,bolum);
	
	fclose(dosya);
	
	
}
