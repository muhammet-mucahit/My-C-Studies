#include <stdio.h>

void findRange(int param[],int size);

int main()
{
	int myArray[]={90, 90, 96, 80 , 90, 100, 85, 90, 95, 95, 85, 90, 60, 70, 75, 81, 65, 50};
	findRange(myArray, 18);
	
	return 0;
}

void findRange(int param[],int size)
{
	int i,max=0,min=param[0];
	for(i=0;i<size;i++)
	{
		if(param[i]>max)
		{
			max=param[i];
		}
		if(param[i]<min)
		{
			min=param[i];
		}
	}
	
	printf("%d",max-min);
	
}
