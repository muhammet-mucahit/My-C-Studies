#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void myMode(const int *,const int ,int *);

int main()
{
	int myArray[]={2,5,2,5,4,4,9,4};
	int result;
	myMode(myArray,8,&result);
	printf("MOD : %d\n",result);
}
void myMode(const int *param1,const int boyut,int *param2)
{
	int i,j,max=0,c=0;
	
	for(i=0;i<boyut-1;i++)
	{
		for(j=0;j<boyut-1;j++)
		{
			if(*(param1+i)==*(param1+j))
			{
				c++;
			}
		}
		if(c>=max)
		{
			max=c;
			*param2=*(param1+i);
		}
		c=0;
	}
}
