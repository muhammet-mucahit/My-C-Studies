#include<stdio.h>
#define SIZE 10

void kabarciksiralama(int *,const int);
void kabarciksiralama2(int *,const int);

int main()
{
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	int i;
	
	printf("Veriler orjinal sirada\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",a[i]);
	}
	
	kabarciksiralama(a,SIZE);
	printf("\nVeriler artan sirada\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",a[i]);
	}
	
	
	kabarciksiralama2(a,SIZE);
	printf("\nVeriler azalan sirada\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",a[i]);
	}
	
	printf("\n");
}

void kabarciksiralama(int *dizi,const int boyut)
{
	void yerdegistir(int *,int *);
	int i,j;
	
	for(i=0;i<boyut-1;i++)
	{
		for(j=0;j<boyut-1;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				yerdegistir(&dizi[j],&dizi[j+1]);
			}
		}
	}	
}

void kabarciksiralama2(int *dize,const int b)
{
	void yerdegistir(int *,int *);
	
	int i,j;
	
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-1;j++)
		{
			if(*(dize+j)<*(dize+j+1))
			{
				yerdegistir(&*(dize+j),&*(dize+j+1));
			}
		}
	}
}

void yerdegistir(int *eleman1Ptr,int *eleman2Ptr)
{
	int temp=*eleman1Ptr;
	*eleman1Ptr=*eleman2Ptr;
	*eleman2Ptr=temp;
}
