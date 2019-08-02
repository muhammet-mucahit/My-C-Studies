#include<stdio.h>
#define SIZE 100

//Triangle Kelimeler -64 tek tirnak 34 oluyor 2 ile carp cikar.

//

int T(int a);

int main()
{
	FILE *filePtr;
  	char kelime[SIZE];
    filePtr = fopen("cagatay3.txt","r");
    
   	int i,j,k,b,toplam=0,c=0;
   	int dizi[SIZE]={0};
   	
   	for(i=0;i<SIZE;i++)
   	{
   		dizi[i]=T(i);
	}
   	
    for(i=0;i<2000;i++)
    {
    	for(j=0;j<SIZE;j++)
    	{
    		fscanf(filePtr,"%c",&kelime[j]);
    		if(kelime[j]!=',')
    		{
    			b=kelime[j]-64;
    			toplam+=b;
			}
			else
			{
				break;
			}
		}
		toplam+=60;
		printf("%d\n",toplam);
	
		for(k=0;k<SIZE;k++)
		{
			if(toplam==dizi[k])
			{
				c++;			   
			}
		}
		toplam=0;
	}
	printf("**%d**",c);
}

int T(int a)
{
	return a=a*(a+1)/2;
}
