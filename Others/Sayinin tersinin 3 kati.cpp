#include<stdio.h>
#include<math.h>

int main()
{
	//girilen sayinin tersinin 3 kati
	// olmadi program bak bir daha
	
	int sayi,kalan=0,c=0,sayi1=0,kalan1=0,b=0;
	printf("Sayi giriniz : ");scanf("%d",&sayi);
	
	sayi1=sayi;
	while(sayi>0)
	{
		kalan=sayi%10;
		sayi/=10;
		c++;
	}
	c--;
	while(c!=-1)
	{
		kalan1=sayi1%10;
		sayi1/=10;
		b+=(pow(10,c))*kalan1;
		c--;
	}
	printf("\n%d",b*3);
	
	
	
	
	
	
}
