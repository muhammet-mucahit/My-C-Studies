#include<stdio.h>
#define SIZE 5

int main()
{
	unsigned int degerler[SIZE]={2,4,6,8,10};
	
	unsigned int *vPtr;
	
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",degerler[i]);
	}
	printf("\n\n");
	
	vPtr=&degerler[0];
	vPtr=degerler;
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",*(vPtr+i)); 
	}
	
	printf("\n\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",*(degerler+i));
	}
	
	printf("\n\n");
	
	for(;*vPtr!=0;vPtr++)
	{
		printf("%d ",*vPtr);
	}
	
}
