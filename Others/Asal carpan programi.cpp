#include<stdio.h>
#include<math.h>
int main()
{
	int sayi,i,j;
	printf("Asal carpanlarina ayrilmasini istediginiz sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	for(i=2;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			sayi=sayi/i;
			printf("%d\n",i);
			i--;
		}
	}
	
	
	
}
	
