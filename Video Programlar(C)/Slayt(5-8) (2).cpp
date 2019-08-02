#include <stdio.h>
#include <math.h>
int main()
{	/*
    SLAYT 5
	if(kosul)
	{
     islemler..
	}     
	else
	{
	 islemler
	}
	
	
	int a=3,b=3;
	if (a>b)
	{
		printf("a b'den buyuktur");
	}
	else
	{
		printf("a b'den buyuk degildir"); 
	}
	
	
	int a,b;
	printf("Ilk sayiyi giriniz :"); scanf("%d",&a);
	printf("Ikinci sayiyi giriniz :"); scanf("%d",&b);
	if(a>b)
	{
		printf("ilk sayi 2.sayidan buyuktur.");
	}
	else
	{
		printf("ilk sayi 2.sayidan buyuk degildir.");
	}
	
	
	int s1,s2;
	printf("2 adet sayi giriniz :");scanf("%d%d",&s1,&s2);
	if (s1>s2)
	{
		printf("%d,%d'den buyuktur.",s1,s2);
	}
	else
	{
		printf("%d,%d'den buyuk degildir.",s1,s2);
	}
	
	
	int a;
	printf("Yasinizi Giriniz :");scanf("%d",&a);
	if(a<=7)
	{
		printf("Cocuk");
	}
	else if(a<=18)
	{
		printf("Genc");
	}
	else
	{
		printf("Yasli");
	}
	
	int secim;
	printf(     "C icin 1 e tiklayiniz\n");
	printf(  "Html icin 2 e tiklayiniz\n");
	printf("Python icin 3 e tiklayiniz\n\n");
	
	printf("Seciminiz :");scanf("%d",&secim);
	if(secim==1)
	{
		printf("\nC esnek bir dildir...");
	}
	else if(secim==2)
	{
		printf("\nHtml bir web tasarim dilidir...");
	}
	else if(secim==3)
	{
		printf("\nPython kolay bir dildir");
	}
	else
	{
		printf("\nLutfen 1 ile 3 arasinda bir sayi giriniz.");
	}
	
	SLAYT 6
	int vize,final;
	float ort;
	printf("Vize notunuz :"); scanf("%d",&vize);
	printf("Final notunuz :"); scanf("%d",&final);
	//ortalama=vize*40/100+final*60/100
	ort=vize*0.4+final*0.6;
	printf("Ortalamaniz :%.2f  ",ort);
	if(ort>90)
	{
		printf("Harfli notunuz : AA");
	}
	else if(ort>80)
	{
		printf("Harfli notunuz : BA");
	}
	else if(ort>70)
	{
		printf("Harfli Notunuz : BB");
	}
	else if(ort>60)
	{
		printf("Harfli notunuz : CB");
	}
	else if(ort>50)
	{
		printf("Harfli notunuz : CC");
	}
	else if(ort>40)
	{
		printf("Harfli Notunuz : DC");
	}
	else if(ort>30)
	{
		printf("Harfli Notunuz : DD");
	}
	else if(ort>20)
	{
		printf("Harfli Notunuz : FD");
	}
	else
	{
		printf("Harfli notunuz : FF");
	}
    
	char cinsiyet;
	float boy;	
	printf("Cinsiyetiniz [E/K]: ");scanf("%c",&cinsiyet);
	printf("Boyunuz :");scanf("%.2f",&boy);
	
	if((cinsiyet=='E') && boy>1.80)
	{
		printf("Cinsiyetiniz Erkek, Boyunuz %.2f 'Basket takimina alindiniz.'");
	}
	else if(cinsiyet=='K' && boy>1.80)
	{
		printf("Cinsiyetiniz Bayan, Boyunuz %.2f 'Basket takimina alindiniz.'");
	}
	else
	{
		printf("Uzgunuz basket takimina giremediniz...");
	}
    
	// 1 ile 10 arasi  urun basina 5 tl prim
	// 11 ile 20 arasi urun*10
	//21 ile 30 arasi urun*15 prim
	
	int maas,urun,prim;
	printf("Maasiniz :");scanf("%d",&maas);
	printf("Urettiginiz urun sayisi :");scanf("%d",&urun);
	if(1<=urun && urun<=10)
	{
		prim=urun*5;
		printf("Maasiniz : %d TL",prim+maas);
	}
	else if(10<urun && urun<=20)
	{
		prim=urun*10;
		printf("Maasiniz :%d TL",prim+maas);
	}
	else if(20<urun && urun<=30)
	{
		prim=urun*15;
		printf("Maasiniz :%d TL",prim+maas);
	}
	else
	{
		printf("Lutfen 1 ile 30 arasinda urun belirtiniz.");
	}
	SLAYT 7
	
	
	switch(degisken)
	{
		case durum1 : islemler ; break;
		case durum2 : islemler ; break;
		case durum3 : islemler ; break;
		case durum4 : islemler ; break;
		...
		
		default : islemler;break;
	}
	

	int secim;
	 surayagit : printf("1 ile 5 arasinda bir sayi giriniz :");scanf("%d",&secim);
	switch(secim)
	{
		case 1 : printf("Istanbul\n");break;
		case 2 : printf("Ankara\n");break;
		case 3 : printf("Trabzon\n");break;
		case 4 : printf("Gaziantep\n");break;
		case 5 : printf("Antalya\n");break;
		
		default: printf("Lutfen 1 ile 5 arasinda bir sayi giriniz.\n");break;
		
	}
	goto surayagit;
	
	
	char karakter;
	muco :printf("Bir karakter giriniz :");scanf("%c",&karakter);
	//karakter=getchar(); 
	switch(karakter)
	{
		case 'a': printf("a harfine bastiniz.");break;
		case 'b': printf("b harfine bastiniz.");break;
		case 'c': printf("c harfine bastiniz.");break;
		default : printf("yanlis bir deger girdiniz.");break;
	}
	goto muco;
	
	int deger;
	printf("Akrep burcu icin :1\n");
	printf("Koc burcu icin   :2\n");
	printf("Yay burcu icin   :3\n");
	muco :printf("1 ile 3 arasinda bir deger giriniz:");scanf("%d",&deger);
	switch(deger)
	{
		case 1:printf("Akrep burcu duygusal bir burcdur.");break;
		case 2:printf("Koc burcu sinirli bir burcdur.");break;
		case 3:printf("Yay burcu tirrek bir burcdur.");break;
		default :printf("1 ile 3 arasinda bir deger giriniz.\a\a\a\n");goto muco;
	}
	
	int secim,s1,s2;
	float sonuc;
	printf("Toplama icin 1 e basiniz.\n");
	printf("Cikarma icin 2 e basiniz.\n");
	printf("Carpma  icin 3 e basiniz.\n");
	printf("Bolme   icin 4 e basiniz.\n\n");
	muco :printf("Yapmak istediginiz islemi seciniz :");scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			{
				printf("2 adet sayi giriniz.");scanf("%d%d",&s1,&s2);
				sonuc=s1+s2;printf("Sonuc= %.1f",sonuc); break;
			}
		case 2:
			{
				printf("2 adet sayi giriniz.");scanf("%d%d",&s1,&s2);
				sonuc=s1-s2;printf("Sonuc= %.1f",sonuc); break;
			}
		case 3:
			{
				printf("2 adet sayi giriniz.");scanf("%d%d",&s1,&s2);
				sonuc=s1*s2;printf("Sonuc= %.1f",sonuc); break;
			}
		case 4: 
			 {
			 	printf("2 adet sayi giriniz.");scanf("%d%d",&s1,&s2);
			 	sonuc=s1/s2;printf("Sonuc= %.1f",sonuc); break;
			 }
		default:printf("Lutfen 1 ile 4 arasinda bir sayi giriniz!\n");goto muco;
	}
	printf("Sonuc: %.1f",sonuc);
	
	//1-3 yay,koc,oglak
	//4-6 akrep,ikizler,balik
	//7-9 yengec,terazi,kova
	
	int deger,secim;
	enbasa:printf("1 ile 10 arasinda bir sayi giriniz :");scanf("%d",&deger);
	if(deger>=1 && deger<=3)
	{
		printf("Yay   icin 1\n");
		printf("Koc   icin 2\n");
		printf("Oglak icin 3\n");
		tekrar1:printf("Secim yapiniz :");scanf("%d",&secim);
		switch(secim)
		{
			case 1: printf("Yay tirrek bir burcdur.");break;
			case 2: printf("Yay tirrek bir burcdur.");break;
			case 3: printf("Yay tirrek bir burcdur.");break;
			default: printf("0 ile 3 arasinda bir sayi giriniz!!!");goto tekrar1;
		}
	}
	else if(deger>=4 && deger<=6)
	{
		printf("Akrep   icin 4\n");
		printf("Ikizler icin 5\n");
		printf("Balik   icin 6\n");
		tekrar2:printf("Bir secim yapiniz :");scanf("%d",&secim);
		switch(secim)
		{
			case 4: printf("Akrep tirrek bir burctur");break;
			case 5: printf("Ikizler tirrek bir burctur");break;
			case 6: printf("Balik tirrek bir burctur");break;
			default: printf("3 ile 6 arasinda bir sayi giriniz!!!");goto tekrar2;
		}
	}
	else if(deger>=7 && deger<=9)
	{
		printf("Yengec icin 7\n");
		printf("Terazi icin 8\n");
		printf("Kova   icin 9\n");
		tekrar3:printf("Bir secim yapiniz :");scanf("%d",&secim);
		switch(secim)
		{
			case 7: printf("Yengec duygusal bir burctur.");break;
			case 8: printf("Terazi adil bir burctur.");break;
			case 9: printf("Kova tirrek bir burctur.");break;
			default: printf("6 ile 9 arasinda bir sayi giriniz!!!");goto tekrar3;
		} 
	}
	
	
	else
	{
		printf("Lutfen 1 ile 10 arasinda bir sayi giriniz!!!");goto enbasa;
	}
	*/
	
	
	
	
     			
	
	 
	
	
	
}


