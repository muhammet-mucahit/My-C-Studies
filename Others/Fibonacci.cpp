#include<stdio.h>
#include<math.h>
int main()
{
	// f(0)=1 
	// f(1)=1
	// f(2)=f(0)+f(1)
	// f(3)=f(2)+f(1)
	// f(4)=f(3)+f(2)
	
	int fibonacci[16];
	fibonacci[0]=1;
	fibonacci[1]=1;
	
 	for(int i=2;i<16;i++)
 	{
		fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
	}
 	for(int i=0;i<16;i++)
 	{
 		printf("%d\n",fibonacci[i]);
	}
	

	
	
	
	
	
}
