#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	char isim[10]="Tugce";
	
	char isim1[]="Tugce";
	char *isim2="Tugce";
	char isim3[]={'T','u','g','c','e','\0'};
	
	printf("%s",isim3);
	
	
	char isim[3][10]={"Tugce","Volkan","Serefcan"};

	printf("%s",isim[2]);
	
	
	char filmler[3][40]={"Dedemin Insanlari","Forest Gump","Da Vinci's Demon"};
	
	for(int i=0;i<3;i++)
	{
		printf("%s\n",filmler[i]);
	}
	
	
	char sehirler[5][20];
	
	for(int i=0;i<5;i++)
	{
		printf("%d. Sehir : ",i+1);scanf("%s",&sehirler[i]);
	}
	printf("\n\nSEHIRLER\n\n");
	
	for(int i=0;i<5;i++)
	{
		printf("%d. Sehir = %s\n",i+1,sehirler[i]);
	}
	
	
	char isimler[0][20];
	int n;
	
	printf("Kac adet isim girilecek ? ");scanf("%d",&n);
	isimler[0][20]=n;
	
	for(int i=0;i<n;i++)
	{
		printf("%d. isim : ",i+1);scanf("%s",&isimler[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d. Isim : %s\n",i+1,isimler[i]);
	}
	
	
	//SLAYT 19
	
	char isim[2][2][20];
	int vize[2][2],final[2][5];
	float ort[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d. sinifin %d.ogrencisinin ismini giriniz : \n",i+1,j+1);scanf("%s",&isim[i][j]);
			printf("%d. sinifin %d. ogrencisinin vize notunu giriniz : \n",i+1,j+1);scanf("%d",&vize[i][j]);
			printf("%d. sinifin %d. ogrencisinin final notunu giriniz : \n",i+1,j+1);scanf("%d",&final[i][j]);
			ort[i][j]=(float)//gerek yok//vize[i][j]*0.4+(float)//gerek yok//final[i][j]*0.6;
		}
	}
	for(int i=0;i<2;i++)
	{
		printf("\n%d. siniftaki ogrencilerin notlari ! ! ! \n",i+1);
		for(int j=0;j<2;j++)
		{
			printf("%s isimli ogrencinin ortalamasi : %.2f\n",isim[i][j],ort[i][j]);
		}
	}
	
	
	char calisan[2][2][10];
	int urun[2][2],maas[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d. sirketin %d. calisaninin ismi : ",i+1,j+1);scanf("%s",&calisan[i][j]);
			printf("%d. sirketin %d. calisaninin maasi : ",i+1,j+1);scanf("%d",&maas[i][j]);
			printf("%d. sirketin %d. calisaninin urettigi urun  : ",i+1,j+1);scanf("%d",&urun[i][j]);
			//1-5 arasindaki urunler icin 50 TL
			//6-10 arasindaki urunler icin 100 TL
			if(urun[i][j]>=1 && urun[i][j]<=5)
			{
				maas[i][j]+=urun[i][j]*50;
			}			
			else if(urun[i][j]>=6 && urun[i][j]<=10)
			{
				maas[i][j]+=urun[i][j]*100;
			}
		}
	}
	printf("\n\n************************\n\n");
	
	for(int i=0;i<2;i++)
	{
		printf("\n\n%d. sirketin calisanlarinin maaslari ! ! ! \n\n",i+1);
		for(int j=0;j<2;j++)
		{
			printf("%s isimli calisanin maasi = %d TL \n",calisan[i][j],maas[i][j]);
		}
	}
	
	//SLAYT 20
	
	int sayi,i,sayilar[]={44,58,65,75,48,96,16,45,12,37},bulundu=0;
	printf("Sayi giriniz : ");scanf("%d",&sayi);
	
	for(i=0;i<10;i++)
	{
		if(sayilar[i]==sayi)
		{
			bulundu=1;break;
		}
	}
	if(bulundu==1)
	{
		printf("Girdiginiz sayi dizinin %d. indisinde bulundu ! ! ! ",i);
	}	
	else
	{
		printf("Sayi bulunamadi ! ! ! ");
	}
	
	
	int sayilar[10],i,bulundu=0,sayi;
	printf("10 Adet sayi giriniz :\n");
	
	for(i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz : ",i+1);scanf("%d",&sayilar[i]);
	}	
	system("CLS");
	
	printf("Aranacak sayi degerini giriniz : ");scanf("%d",&sayi);
	for(i=0;i<10;i++)
	{
		if(sayilar[i]==sayi)
		{
			bulundu=1;break;
		}
	}
	if(bulundu==1)
	{
		printf("%d sayisi dizinin %d. indisinde bulunmustur.",sayi,i);
	}
	else
	{
		printf("Girdiginiz sayi dizide bulunamamistir.");			
	}
	
	
	int a=5,b=3;
	printf("Oncesinde : a=%d--b=%d\n",a,b);
	int gecicibellek=a;
	a=b;
	b=gecicibellek;
	printf("Sonrasinda : a=%d--b=%d\n",a,b);
	
	//SLAYT 21
	int dizi[]={45,78,14,5,19,99},i,j,gecicibellek;
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf(" %d ",dizi[i]);
	}
	
	
	int dizi[5],i,j,gecicibellek;
	
	printf("5 adet sayi giriniz : \n");
	for(i=0;i<5;i++)
	{
		printf("%d. sayiyi giriniz : ",i+1);scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				gecicibellek=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecicibellek;
			}
		}
	}
	printf("Siralanis :");
	for(i=0;i<5;i++)
	{
		printf(" %d ",dizi[i]);
	}
	*/
	
	
	
	
	
	
	
	
}
