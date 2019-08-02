#include <stdio.h>

int findIndex(int param[],int size,int value);

int main()
{
	int myArray[]={91, 92, 96, 80, 90, 100, 85, 90, 95, 95, 85, 90, 60, 70, 75, 81, 65, 50};
	
	int index=findIndex(myArray,18,90);
	
	if(index != -1)
	{
		printf("BULUNAN INDIS: %d",index);
	}
	else
	{
		printf("ELEMAN BULUNAMADI.");
	}
	return 0;
}

int findIndex(int param[],int size,int value)
{
	for(int i=0;i<size;i++)
	{
		int kontrol=1;
		if(value==param[i])
		{
			kontrol=0;
		}
		else
		{
			kontrol=1;
		}
		if(kontrol==0)
		{
			return i;break;
		}
	}


}








