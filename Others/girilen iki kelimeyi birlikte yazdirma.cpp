#include <stdio.h>
#define SIZE 20

int boyut(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		
	}
	return i;
}

int main()
{
	
	char string1[SIZE];
	char string2[SIZE];
	char string3[SIZE+SIZE];
	
	printf("1. karakteri giriniz : ");scanf("%s",string1);
	printf("2. karakteri giriniz : ");scanf("%s",string2);
	
	int b1=boyut(string1); 
	int b2=boyut(string2);
 
	for(int i=0;i<b1;i++)
	{
		string3[i]=string1[i];
	}
	for(int i=0;i<b2;i++)
	{
		string3[i+b1]=string2[i];
	}
	printf("%s",string3);
	
	
	
}
