#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 5
//#define yaz printf

/*
Donus_Tipi FonksiyonAdi ( tip parametre1, tip parametre2 )
{
	.....
	fonksiyon kodlari
	.....
}


void mesaj()
{
	printf("Merhaba Dunya");
}

void dongu()
{
	for(int i=0;i<=10;i++)
	{
		printf("%d",i);
	}
}

void satiratla()
{
	printf("\n");
}

//1+rand()%100;

void zarat()
{
	srand(time(NULL));
	int deger=1+rand()%6;
	printf("%d",deger);
}

void kontrolet(int sayi)
{
	if(sayi%2==0)
	{
		printf("%d sayisi cifttir",sayi);
	}
	else
	{
		printf("%d sayisi tektir",sayi);
	}
}

//*** 
//*** 
//***

void kutuciz(int boy,int en)
{
	for(int i=0;i<boy;i++)
	{
		for(int j=0;j<en;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	mesaj();
	satiratla();
	satiratla();
	dongu();
	satiratla();
	satiratla();
	zarat();
	satiratla();
	satiratla();
	int s;
	//printf("Sayi giriniz : ");scanf("%d",&s);
	//satiratla();
	//kontrolet(s);
	satiratla();
	satiratla();
	int boy,en;
	printf("Boyunuzu giriniz : ");scanf("%d",&boy);
	printf("Eninizi giriniz : ");scanf("%d",&en);
	kutuciz(boy,en);
}
	
// SLAYT 30
	
void sayisalloto()
{
	srand(time(NULL));
	for(int i=1;i<=6;i++)
	{
		printf("\n%d. Kolon :",i);
		for(int j=1;j<=6;j++)
		{
			//icinde yazarsak srand i hep ayni degeri uretir yani program
			//her acildiginda farkli deger uretir fakat urettigi degerlerin
			//hepsi ayni olur.
			printf(" %d\t",1+rand()%45);
		}
	}
}


void nothesapla(int vize,int final)
{
	double ortalama=(double)vize*0.4+(double)final*0.6;
	if(ortalama<=100 && ortalama>=90)
	{
		printf("Ortalama : %.1lf - AA",ortalama);
	}
	else if(ortalama<=89 && ortalama>=70)
	{
		printf("Ortalama : %.1lf - BB",ortalama);
	}
	else if(ortalama<=69 && ortalama>=50)
	{
		printf("Ortalama : %.1lf - CC",ortalama);
	}
	else if(ortalama<=49 && ortalama>=30)
	{
		printf("Ortalama : %.1lf - DD",ortalama);
	}
	else  
	{
		printf("Ortalama : %.1lf - FF",ortalama);
	}
	
}

	
int main()
{
	//sayisalloto();
	int v,f;
	printf("Vize notunuzu giriniz : ");scanf("%d",&v);
	printf("Final notunuzu giriniz : ");scanf("%d",&f);
	nothesapla(v,f);	
}


// SLAYT 31

int topla(int x,int y)
{
	int sonuc=x+y;
	return sonuc;
	// direkt return x+y de yazabilirdik(modern fonksiyon)
}

int carp(int s1,int s2)
{
	int sonuc=s1*s2;
	return sonuc;
}

int kareal(int sayi1,int sayi2)
{
	int sonuc=topla(sayi1,sayi2);
	return carp(sonuc,sonuc);
}

int ntoplam(int sayi)
{
	int toplam=0;
 	for(int i=1;i<=sayi;i++)
 	{	
 		toplam+=i;
    }
    return toplam;
}
int sonuc=1;
int us_al(int taban,int us)
{
	for(int i=1;i<=us;i++)
	{
		sonuc*=taban;
	}
	return sonuc;
}


int faktoriel(int sayi)
{
	int f=1;
	//for(int i=1;i<=sayi;i++)
	//{
	//	f=f*i;
	//}
	//return f;
	
	if(sayi!=1)
	{
		return sayi*faktoriel(sayi-1);
	}
}


int main()
{
	
	int a,b;
	printf("2 deger giriniz : ");scanf("%d%d",&a,&b);
	printf("Toplam = %d",topla(a,b));
	
	printf("\nCarpim = %d",carp(a,b));
	
	printf("\n Toplamin Karesi = %d",kareal(a,b));
	
	int a;
	printf("Bir deger giriniz : ");scanf("%d",&a);
	printf("1 ile %d arasindaki sayilarin toplami = %d",a,ntoplam(a));
	
	int t,u;
	printf("Tabani giriniz : ");scanf("%d",&t);
	printf("Ussu giriniz : ");scanf("%d",&u);
	printf("Sonuc = %d",us_al(t,u));
	
	
	int m;
	printf("Sayi giriniz : ");scanf("%d",&m);
	printf("Girdiginiz sayinin faktoriyeli = %d",faktoriel(m));
	
}
	
	
donusTipi fonksiyonAdi(tip dizi[],tip boyut[])		
{
	islemler;
}
*/


void maxbul(int dizi[],int boyut)
{
	int max=0;
	for(int i=1;i<=boyut;i++)
	{
		printf("%d. sayiyi giriniz : %d",i);scanf("%d",&dizi[i]);
	 	if(dizi[i]>max)
		{
	 	    max=dizi[i];
		}
	}
	printf("En buyuk Sayi = %d",max);
}

void fonksiyon2(int notoku[],int boyut2)
{
	for(int i=1;i<=boyut2;i++)
	{
		printf("%d. ogrencinin notu : ",i);scanf("%d",&notoku[i]);
	}
	for(int i=1;i<=boyut2;i++)
	{
		printf("\n\n%d. ogrencinin notu = %d\n",i,notoku[i]);
	}
}
double orthesapla(int notoku[],int boyut2)
{
	int toplam=0;
	for(int i=1;i<=boyut2;i++)
	{
		toplam+=notoku[i];
	}
	double ort=toplam/boyut2;
	printf("Sinif Ortalamasi = %.2lf",ort);
	return ort;
}
int main()
{
	//int diziAdi[n];
	//maxbul(diziAdi,n);
	
	int diziAdi2[n];
	fonksiyon2(diziAdi2,n);	
	orthesapla(diziAdi2,n);
}
// program sacma calisiyor.





	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

