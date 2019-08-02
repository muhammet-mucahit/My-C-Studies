#include<stdio.h>

//sayinin tersinin 3 kati

int main()
{
	int sayi,ters=0;
	printf("Sayi giriniz : ");scanf("%d",&sayi);
	
	while(sayi>0)
	{
		ters=ters*10+sayi%10;
		sayi/=10;
	}
	printf("%d",ters*3);
}
