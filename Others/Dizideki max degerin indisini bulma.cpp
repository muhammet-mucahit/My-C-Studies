#include<stdio.h>
#include<math.h>

int main()
{
	int a=0,i,b=0;
	int dizi[20]={10,12,56,23,57,78,23,31,56,23,34,76,98,67,34,23,34,56,89,23};
	for(i=0;i<20;i++)
	{
		if(dizi[i]>a)
		{
			a=dizi[i];
			b=i;
		}
	}

printf("\n%d sayisi bu dizinin maximum degeridir ve %d. indisinde bulunur.\n",a,b);





}
	
