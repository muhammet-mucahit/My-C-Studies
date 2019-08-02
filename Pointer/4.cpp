#include<stdio.h>

int main()
{
	int x=5,y;
	
	int *ptr=&x;
	
	printf("%d\n",*ptr);
	printf("%x",ptr);
	
	*ptr=7;
	ptr=&y;
	
	printf("\n%d",*ptr);
}
