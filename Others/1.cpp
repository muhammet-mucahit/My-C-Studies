#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void myStringSearch(const char*,const char,int *);

int main()
{
	char myString[]="muhammetmucahit";
	char charToFind='m';
	
	int result;
	myStringSearch(myString,charToFind,&result);
	
	if(result!=-1)
		printf("KARAKTER BULUNDU %d\n",result);
	else
		printf("KARAKTER BULUNAMADI.\n");
}

void myStringSearch(const char *param1,const char param2,int *sonuc)
{
	int i,c=0;
	for(i=0;*(param1+i)!='\0';i++)
	{
		if(*(param1+i)==param2)
		{
			c++;
		}
	}
	if(c==0)
	{
		*sonuc=-1;
	}
	else
	{
		*sonuc=c;
	}
}
