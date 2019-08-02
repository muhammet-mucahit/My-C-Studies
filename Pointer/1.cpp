#include<stdio.h>

void karakterleriYazdir(const char *);

int main()
{
	char string[]="Mucahit Aktepe\0";
	
	printf("%s\n\n",string);
	printf("string :\n");
	karakterleriYazdir(string);
	printf("\n");
	

}

void karakterleriYazdir(const char *sPtr)
{
	
	for(;*sPtr!='\0';sPtr++)
	{
		printf("%c  ",*sPtr); 
	}
	
	int i;
	
	for(i=0;sPtr[i]!='\0';i++)
	{
		printf("%c",sPtr[i]);
	}
	
	
	for(i=0;*(sPtr+i)!='\0';i++)
	{
		printf("%c",*(sPtr+i));
	}
}
