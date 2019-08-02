#include <stdio.h>

int main()
{
	int n[10]={19,3,15,7,11,9,13,5,17,1};
	
	for(int i=0;i<10;i++)
	{
		printf("%d-->",n[i]);
		for(int j=1;j<=n[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
