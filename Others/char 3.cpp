#include<stdio.h>
#define SIZE 20

// program sacma karakterler olusturuyor bak bir daha ! ! !
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
	
	printf("Bir kelime giriniz : ");scanf("%s",&string1);
	
	int b1=boyut(string1);
	int c=0,i;
	b1--;
	for(i=b1;i>=0;i--)
	{
		string2[c]=string1[i];
		c++;
	}
	printf("%s",string2);
	
	return 0;
}
