#include<stdio.h>

int main()
{
	// En buyuk asal carpan 600851475143
	// 13195 5,7,13,29
	
	int i,j;
	long long sayi=600851475143LL;
	
 	for(i=2;sayi!=1;i++)
 	{
 		if(sayi%i==0)
 		{
 			sayi/=i;
 			printf("%d ",i);
 			i--;
 		}
 	}
	
}
