#include <stdio.h>

int main()
{
	/*printf("Merhaba Dunya");
	printf("Ben bir \nC programcisiyim");
	
	printf("\aben bir \tc programisiyim");
	
	int sayi=25;
	int sayi2=50;
	
	int sayi=25,sayi2=50,sayi3=75;
	printf("%d\n%d\n%d",sayi,sayi2,sayi3);
	
	char ad[10]="Ahmet";
	printf("Son harfiniz %c",ad[4]);

	char ad[10]="Mehmet";
	int yas=25;
	float boy=1.80;
	printf("AD: %s \nYAS: %d\nBOY: %.1f",ad,yas,boy);
	*/
	
	char isim[10];
	int yas;
	
	printf("Adiniz :"); scanf("%s",&isim);
	printf("Yasiniz :"); scanf("%d",&yas);
	
	printf("Merhaba %s yasiniz %d",isim,yas);




}
