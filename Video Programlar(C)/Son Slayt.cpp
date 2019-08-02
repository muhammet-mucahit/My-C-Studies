#include<stdio.h>

//fgetc()  --> Dosyadan tek bir karakter okur.
//fscanf() --> Dosyadan bicimlendirilmis karakter dizisi okur.

int main()
{
	FILE *dosya;
	/*
	dosya=fopen("deneme.txt","r");
	char karakter;
	if(dosya!=NULL)
	{
		karakter=fgetc(dosya);
		printf("%c",karakter);
	}
	else
	{
		printf("Dosya Bulunamadi.");
	}
	
	
	char kelime1[10];
	char kelime2[10];
	int sayi;
	
	if((dosya=fopen("deneme.txt","r"))!=NULL)
	{
		fscanf(dosya,"%s",&kelime1);
		fscanf(dosya,"%s",&kelime2);
		fscanf(dosya,"%d",&sayi);
		printf("%s %s %d",kelime1,kelime2,sayi);
	}
	else
	{
		printf("Dosya Bulunamadi");
	}
	
	
	char kelime[50][20];
	int i=0;
	if((dosya=fopen("deneme.txt","r"))!=NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%s",&kelime[i]);
			printf("%s ",kelime[i]);
			i++;
			
		}
	}
	else
	{
		printf("Dosya Bulunamadi");
	}
	
	
	char numara[10][10],isim[10][20];
	int notlar[10],i=0;
	
	if((dosya=fopen("deneme.txt","r"))!=NULL)
	{
		while(!feof(dosya))
		{
			fscanf(dosya,"%s %s %d",&numara[i],&isim[i],&notlar[i]);
			printf("%s %s %d\n",numara[i],isim[i],notlar[i]);
			i++;
		}	
	}
	else
	{
		printf("Dosya Bulunamadi");
	}
	*/
	
	char karakter;
	
	if((dosya=fopen("deneme.txt","r"))!=NULL)
	{
		karakter=fgetc(dosya);
		while(karakter!=EOF)// EOF yerine -1 de yazabiliriz.
		{
			printf("%c",karakter);
			karakter=fgetc(dosya);
		}
	}
	else
	{
		printf("Dosya Bulunamadi");
	}
	
	
	
	
	
	
	fclose(dosya);
}
