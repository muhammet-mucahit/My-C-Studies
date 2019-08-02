#include<stdio.h>

void findGreaterValues(int param[],int size,int value);

int main()
{
	int myArray[]={100, 90, 0, 40, 60};

	findGreaterValues(myArray,5,59);

	return 0;
}

void findGreaterValues(int param[],int size,int value)
{
	int c=0;
	for(int i=0;i<size;i++)
	{
		if(param[i]>value)
		{
			c++;
		}
	}
	printf("%d den buyuk %d adet deger vardir.",value,c);

	

}
