#include<stdio.h>
#include<math.h>
int main()
{
	int sayi,a=0;
	printf("Bir sayi giriniz : ");scanf("%d",&sayi);
	
	for(int i=1;i<=sqrt(sayi);i++)
	{
		if(sayi%i==0)
		{
			a+=1;
		}
	}
	if(a==2)
	{
		printf("\nGirdiginiz sayi asaldir.");
	}
	else
	{
		printf("\nGirdiginiz sayi asal degildir.");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
