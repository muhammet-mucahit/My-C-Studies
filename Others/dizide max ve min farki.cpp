#include<stdio.h>

//dizi icindeki max ve min terimlerin farkini yazdiran fonksiyon.
void findRange(int param[],int size);

int main()
{
	int myArray[]={90, 90, 96, 80 , 90, 100, 85, 90, 95, 95, 85, 90, 60, 70, 75, 81, 65, 50};
	findRange(myArray, 18);
	
	return 0;
}

void findRange(int param[],int size)
{
	int max=0,min;
	for(int i=0;i<size;i++)
	{
		if(param[i]>=max)
		{
			max=param[i];
		}
		if(param[i]<=param[i+1])
		{
			min=param[i];
		}
		else
		{
			min=param[i+1];
		}
	}
	printf("%d---%d",max,min);
	printf("\n\n%d",max-min);
}
