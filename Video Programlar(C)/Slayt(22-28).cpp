#include<stdio.h>
#include<string.h>
int main()
{
	/*
	
	// strlen fonksiyonu bir karakter dizisinin kac karakterden olustugunu 
	// bize soyler int bir deger olarak.
	char ad[]="mucahit";
	int uzunluk=strlen(ad);
	
	printf("%s ismi %d karakterden olusmustur.",ad,uzunluk);
	
	
	printf("\n%d",strlen(ad));
	
	printf("\n%d",strlen("Muhammet"));
	
	
	char ad[10];
	printf("Isminizi giriniz : ");scanf("%s",ad);
	
	printf("%s karakterinin uzunlugu = %d",ad,strlen(ad));
	
	
	char sehir[]="Istanbul";
	
	for(int i=0;i<strlen(sehir);i++)
	{
		printf("%c\n",sehir[i]);
	}
	
	
	char kitap[]="Da Vinci'nin Sifresi";
	
	for(int i=strlen(kitap);i>=0;i--)
	{
		printf("%c",kitap[i]);
	}
	
	
	char ad[10];
	printf("Kullanici adi : ");scanf("%s",&ad);
	
	if(strlen(ad)<6)
	{
		printf("En az 6 karakterden olusan bir kullanici adi girmelisiniz...");
	}
	else
	{
		printf("Kaydiniz basariyla alinmistir %s ",ad);
	}
	
	// SLAYT 23
	
	// strcpy fonksiyonu bir karakteri dizisini baska bir karakter dizisine
	// koplayamamizi saglar.
	
	strcpy(parametre1,parametre2);
	
	char isim[10]="Melek",isim1[10];
	
	printf("%s",strcpy(isim1,isim));
	
	printf("\n%s",isim1);
	
	
	char mesaj[10];
	
	printf("Merhaba %s ",strcpy(mesaj,"Mucahit"));
	
	
	char isim[]="Mucahit",isimkopya[10];
	
	for(int i=0;i<strlen(isim);i++)
	{
		printf("Merhaba %s\n",strcpy(isimkopya,isim));
	}
	
	//SLAYT 24
	// strcat fonksiyonu girilen parametlerin 2 argumanini birbirine ekler 
	// ve ekrana yazdirir.
	
	char mesaj1[]="Merhaba ",mesaj2[]="Trabzon ";
	
	//strcat(mesaj1,mesaj2);
	
	printf("%s",strcat(mesaj2,mesaj1));
	
	
	char mesaj[]="Merhaba ",isim[10];
	
	printf("Isminizi giriniz : ");scanf("%s",&isim);
	
	printf("%s",strcat(mesaj,isim));
	
	
	char isim[10],isimkopya[10],mesaj[]="Merhaba ";
	
	printf("Isminizi giriniz : ");scanf("%s",&isim);
	
	strcpy(isimkopya,isim);
	
	int uzunluk=strlen(isim);
	
	printf("%s, isminin karakter uzunlugu %d",strcat(mesaj,isimkopya),uzunluk);
	
	// SLAYT 25
	// strcmp fonksiyonu
	
	strcmp(string1,string2)==0;//her iki karakter dizisi de birbirine esittir.
	strcmp(string1,string2)<0;// s1 s2 den once gelir alfabetik olarak.
	strcmp(string1,string2)>0;// s1 s2 den sonra gelir alfabetik olarak.
	
	
	char baskent[]="Ankara",cevap[20];
	printf("Turkiyenin baskenti neresidir ? ");scanf("%s",&cevap);
	if(strcmp(baskent,cevap)==0)
	{
		printf("Tebrikler %s cevabi dogru ! ! !",cevap);
	}
	else
	{
		printf("Uzgunum %s cevabi yanlis ! ! !",cevap);
	}
	
	
	char kullanici[]="Mucahit3",sifre[]="aksaak+123",kadi[10],sfr[10];
	
	printf("Kullanici adiniz : ");scanf("%s",&kadi);
	printf("Sifreniz : ");scanf("%s",&sfr);
	
	if(strcmp(kullanici,kadi)==0 && strcmp(sifre,sfr)==0)
	{
		printf("Merhaba %s giris basarili",kadi);
	}
	else
	{
		printf("Uzgunum hatali kullanici adi veya sifre girdiniz!");
	}
	
	
	char isim[][20]={"Ali","Tugce","Melek","Volkan","Ahmet","Alp"},gecicibellek[20];
	int i,j;
	
	printf("Oncesi :\n-----------------\n");
	for(int k=0;k<6;k++)
	{
		printf("%s\n",isim[k]);
	}
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(strcmp(isim[j],isim[j+1])>0)
			{
				strcpy(gecicibellek,isim[j]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j+1],gecicibellek);
			}						
		}
	}
	printf("Sonrasi :\n---------------\n ");
	
	for(i=0;i<=6;i++)
	{
		printf("%s\n",isim[i]);
	}
	
	// SLAYT 26 ! ! ! ! ! ! ! ! ! strrev fonksiyonunu tanimiyor...
	// strrev fonksiyonu bir string karakter dizisini tersten yazdirmaya yarar.
	
	printf("Dongu Yardimiyla\n\n");
	
	char ad[10],ad2[10];
	printf("Adinizi giriniz : ");scanf("%s",&ad);
 	int uzunluk=strlen(ad);
 	
 	for(int i=uzunluk;i>=0;i--)
 	{
 		printf("%c",ad[i]);
	}
	
	//-------------------------
	printf("\n\n\nSTRREV Fonksiyonu Yardimiyla\n\n"); 
	
	printf("Soyadinizi giriniz : ");scanf("%s",&ad2);
	
	printf("%s",strrev(ad2));
	
	
	// SLAYT 27 ! ! ! ! ! ! ! ! ! strlwr fonksiyonunu tanimiyor.
	// strlwr fonksiyonu girilen butun karakterleri kucuk harfe cevirir.
	
	char karakter[20];
	printf("Karakter giriniz : ");scanf("%s",&karakter);
	
	printf("Kucuk harfli : %s",strlwr(karakter));
	
	
	//SLAYT 28 ! ! ! ! ! ! ! ! ! ! ! ! strupr fonksiyonunu tanimiyor.
	// strupr fonksiyonu girilen butun karakterleri buyuk harfe cevirir.
	
	char karakter[];
	printf("Karakter giriniz : ");scanf("%s",&karakter);
	
	printf("Buyuk harfli : %s",strupr(karakter));
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
