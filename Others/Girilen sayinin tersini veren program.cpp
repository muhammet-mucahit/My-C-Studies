#include<stdio.h>
#include<math.h>
int main()
{
	/*
	int sayi,a,b,c,d;
	printf("Uyari : 1 ile 10000 arasinda bir deger giriniz !!!");
	printf("\n\nBir sayi giriniz : ");scanf("%d",&sayi);
	a=sayi/1000;
	b=(sayi%1000)/100;
	c=((sayi%1000)%100)/10;
	d=((sayi%1000)%100)%10;
	
	if(sayi<10)
	{
		printf("%d\n",d);
	}
	else if(sayi<100)
	{
		printf("%d%d\n",d,c);
	}
	else if(sayi<1000)
	{
		printf("%d%d%d\n",d,c,b);
	}
	else if(sayi<10000)
	{
		printf("%d%d%d%d\n",d,c,b,a);
	}
	else
	{
		printf("Uzgunum hatali bir deger girdiniz.");
	}
	*/
	
	//Programi sor !!!
	
	int i=0;
	int a,basamak,sayi;
  
  	printf("kac basamakli sayi gireceksiniz?:");scanf("%d",&basamak);
 	int dizi[basamak-1];
	printf("bir sayi girin:");scanf("%d",&sayi);
	while(sayi)
	{
  		a=sayi%10;
	   	dizi[i]=a;
        sayi=sayi/10;
        i++;
	}
	for(i=0;i<basamak;i++)
	printf("%d",dizi[i]);
	
	
	
	
	
	
	
	
	
	
}
