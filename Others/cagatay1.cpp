#include<stdio.h>
#define SIZE 1000

int asal(long long a);

int main()
{
	int dizi[SIZE];
	int i,j=0,toplam=0;
	for(i=2;i<SIZE;i++)
	{
		if(asal(i)==1)
		{
			dizi[j]=i;
			j++;
		}
	}
	int c=0,max=0;
	for(int x=2;x<SIZE;x++)
	{
		if(asal(x)==1)
		{
			for(int a=0;dizi[a]!='\0';a++)
			{
				toplam=dizi[a];
				c++;
   				for(int b=a+1;dizi[b]!='\0';b++)
				{
				 	toplam+=dizi[b];
				 	c++;
					if(toplam==x && c>max)
					{
						max=c;
						printf("%4d",x);
					}
				}
				c=0;
	 		}
		}
	
	}

}
int asal(long long a)
{
	int i,c=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}








