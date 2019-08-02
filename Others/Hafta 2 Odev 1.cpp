#include<stdio.h>
#include<math.h>
int main()
{
	int a=0,b,c=0,d=0;
	for(int i=1;i<=100;i++)
	{
		a=a+i;
	}
	b=a*a;
	printf("%d\n\n",b);
	for(int i=1;i<=100;i++)
	{
		c=i*i;
		d=d+c;
	}
	printf("%d\n\n",d);	
	
	printf("%d\n\n",b-d);
	
	
	
	
	
	
	
	
	
	
	
}
	
