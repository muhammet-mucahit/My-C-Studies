#include<stdio.h>
#define SIZE 100000
//T(285) = P(165) = H(143) = 40755

int T(long long a);
int P(long long a);
int H(long long a);

int main()
{
	long long dizi2[SIZE];
	long long dizi3[SIZE];
	
	for(int i=1;i<SIZE;i++)
	{
		dizi2[i-1]=P(i);
		dizi3[i-1]=H(i);
	}
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
		{
			if(dizi2[i]==dizi3[j])
			{
				printf("%lld\n",dizi2[i]);
			}
		}
	}
	
}

int P(long long a)
{
	return a=a*(3*a-1)/2;
}

int H(long long a)
{
	return a=a*(2*a-1);
}
