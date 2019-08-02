#include <stdio.h>

int main()
{
	int dizi[10][20]={
		{1,2,3,6,8,3,4,5,7,0,9,6,8,6,2,3,4,6,5,7},
		{5,8,3,5,8,3,4,0,5,6,8,0,2,4,5,7,7,0,3,5},
     	{1,2,3,5,5,7,9,0,9,7,3,1,2,3,4,5,6,7,8,9},
    	{2,4,6,1,2,3,5,4,7,9,0,8,7,4,5,2,4,5,6,7},
		{1,2,4,6,7,8,9,0,3,5,3,2,1,4,6,8,9,3,4,6},
		{2,3,5,2,4,7,7,9,0,7,5,6,8,0,3,4,1,3,4,8},
		{2,4,5,6,7,9,0,6,4,6,3,2,1,4,6,8,5,3,5,8},
		{1,2,8,6,0,9,7,7,8,5,4,2,3,5,6,7,8,3,5,1},
		{1,2,3,5,6,7,8,3,4,5,6,7,8,9,0,2,1,3,4,5},
		{1,3,4,6,7,8,3,4,7,9,0,7,8,5,2,3,4,5,6,8},
	};
	
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0;
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			switch(dizi[i][j])
			{
				case 0 : a++; break;
				case 1 : b++; break;
				case 2 : c++; break;
				case 3 : d++; break;
				case 4 : e++; break;
				case 5 : f++; break;
				case 6 : g++; break;
				case 7 : h++; break;
				case 8 : k++; break;
				case 9 : l++; break;
				
			}
			
		}
	}
	printf("%d tane 0 sayisi vardir.\n",a);
	printf("%d tane 1 sayisi vardir.\n",b);
	printf("%d tane 2 sayisi vardir.\n",c);
	printf("%d tane 3 sayisi vardir.\n",d);
	printf("%d tane 4 sayisi vardir.\n",e);
	printf("%d tane 5 sayisi vardir.\n",f);
	printf("%d tane 6 sayisi vardir.\n",g);
	printf("%d tane 7 sayisi vardir.\n",h);
	printf("%d tane 8 sayisi vardir.\n",k);
	printf("%d tane 9 sayisi vardir.\n",l);
	
	
	
	
	
	
	
}
	
