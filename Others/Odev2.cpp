#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("1.sayiyi giriniz :");scanf("%d",&a);
	printf("2.sayiyi giriniz :");scanf("%d",&b);
	printf("3.sayiyi giriniz :");scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("En buyuk a.");
		}
		else
		{
			printf("En buyuk c.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("En buyuk b.");
		}
		else
		{
			printf("En buyuk c.");
		}
	}	
}	
