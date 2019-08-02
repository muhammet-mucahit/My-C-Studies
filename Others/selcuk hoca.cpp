#include<stdio.h>

//Dizide ayni deger varsa yazdirmayacak.

int main()
{
	int dizi[10];
	int c=0;
	for(int i=0;i<10;i++)
	{
		printf("Sayi giriniz :");scanf("%d",&dizi[i]);
		if(i==0)
		{
			printf("%d\n",dizi[i]);
		}
		else
		{
			for(int j=i-1;j>=0;j--)
			{				
			 	if(dizi[j]==dizi[i])
				{					
				 	c++; 	
				}
			}
			if(c==0)
			{
   			    printf("%d\n",dizi[i]);
			}
			c=0;
		}
		
	}
}
