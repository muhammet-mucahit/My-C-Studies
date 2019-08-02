#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mesajyaz(int *x);
int carp(int *a,int *b);
void degistir(int *x,int *y);
int f(int *x);

int main()
{
	/*
	int sayi=5;
	int *p1=&sayi;
	int sayi2=*p1;
	
	printf("%d\n",sayi);
	printf("%d\n",sayi2);
	printf("%p",p1);
	
	
	int sayi=10;
	int *ptr;
	ptr=&sayi;
	int sayi2=*ptr;
	printf("%d\n",sayi);
	printf("%p\n",ptr);
	printf("%d",sayi2);
	
	int *p1,*p2;//Dogru
	int *p1,p2;//Yanlis
	
	
	int sayi=5;
	char karakter='A';
	float ondalik=5.4;
	
	int *psayi;
	char *pkarakter;
	float *pondalik;
	
	psayi=&sayi;
	pkarakter=&karakter;
	pondalik=&ondalik;
	
	printf("%d in adresi %X\n",sayi,psayi);
	printf("%c nin adresi %X\n",karakter,pkarakter);
	printf("%.2f nin adresi %X\n",ondalik,pondalik);

	
	
	int sayi=8;
	int *p=&sayi;
	
	printf("%p\n",p);
	printf("%p\n",p+1);
	p+=10;
	printf("%p\n",p);
	printf("%p\n",p-50);
	
	
	
	// SLAYT 34
	
	int dizi[]={5,4,8,9,11};
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",dizi[i]);
	}
	
	
	
	int dizi[]={5,4,8,9,11};
	
	int *ptr;
	ptr=&dizi[0]; //ptr=dizi demem de yeterli.
	
	//printf("Dizinin 2.indisi : %d - Adresi :%p\n",dizi[2],ptr);

 	//printf("Dizinin 2.indisi : %d - Adresi :%p",*(ptr+1),(ptr+1));
	//int 4 baytlik yer kaplar adresleri 1 artirarak bak adres degerleri 4 artiyor.
	
	for(int i=0;i<5;i++)
	{
		printf("Dizi[%d]: %2d - Adresi :%p\n",i,*(ptr+i),(ptr+i));
	}
	
	
	// SLAYT 35
	
	char isim[]="Mehmet";
	char isim2[]={'M','e','h','m','e','t','\0'};
	
	printf("%c\n",isim[0]);
	printf("%c\n\n",isim2[0]);
	
	char *p=isim;
	
	printf("%c\n",*(p+1));
	
	char *sehir="Istanbul";
	printf("%c",*(sehir+2));
	
	
	char *sehir="OSMANIYE";
	int i=0;
	
	while(sehir[i]!='\0')
	{
		printf("%c adresi : %p \n",*(sehir+i),(sehir+i));
		i++;
	}
	
	
	char *sehir="OSMANIYE";
	
	while(*sehir!='\0')
	{
		printf("%c adresi : %p \n",*sehir,sehir);
		sehir++;
	}
	
	
	char *sehirler[]={"Adana","Antalya","Izmir","Manisa",'\0'};
	
	for(int i=0;sehirler[i]!=NULL;i++)
	{
		printf("%s - %p\n",*(sehirler+i),sehirler+i);
	}
	
	
	// SLAYT 36	
	
	int deger;
	printf("Bir sayi giriniz : ");scanf("%d",&deger);
	
	int *ptr=&deger;
	
	//mesajyaz(ptr);
	mesajyaz(&deger);
	
	
	
	int sayi1,sayi2;
	printf("Sayi giriniz : ");scanf("%d",&sayi1);
	printf("Sayi giriniz : ");scanf("%d",&sayi2);	
	
	int sonuc=carp(&sayi1,&sayi2);
	
	printf("%d x %d = %d",sayi1,sayi2,sonuc);
	
	
	
	int sayi1,sayi2;
	printf("Sayi giriniz : ");scanf("%d",&sayi1);
	printf("Sayi giriniz : ");scanf("%d",&sayi2);
	
	printf("%d - %d \n",sayi1,sayi2);
	degistir(&sayi1,&sayi2);
	printf("%d - %d ",sayi1,sayi2);
 	
 	
 	int sayi;
 	printf("Sayi giriniz : ");scanf("%d",&sayi);
 	
 	printf("%d",f(&sayi));
}

void mesajyaz(int *x)
{
	int i;
	for(i=1;i<=*x;i++)
	{
		printf("%.2d - Merhaba Dunya\n",i);
	}
}

int carp(int *a,int *b)
{
	return (*a)*(*b); 
}

void degistir(int *x,int *y)
{
	int gecicibellek;
	gecicibellek=*x;
	*x=*y;
	*y=gecicibellek;
	
}

int f(int *x)
{
	int i,faktoriyel=1;
	for(i=*x;i>=1;i--)
	{
		faktoriyel*=i;
	}
	return faktoriyel;
}


*/




















