#include<stdio.h>

void tokenize(char *delimeter,char stringToTokenize,char tokens[],int tokenCount);

int main()
{
	char delimeter[]="araba";
	char stringToTokenize='a';
	int tokenCount;
	char tokens[10];
	/*
	for(boyut=0;*(isim+boyut)!='\0';boyut++)
	{
		printf("%c ",*(isim+boyut));
	}
	
	printf("\n%d\n\n",boyut);
	*/
	
	int i;
	
	for(tokenCount=0;*(delimeter+tokenCount)!='\0';tokenCount++)
	{
		printf("%c ",*(delimeter+tokenCount));
	}
	int size=tokenCount;
	
	printf("\n\n%d\n\n",size);
	
	for(i=0;i<size;i++)
	{
		if(stringToTokenize==*(delimeter+i))
		{
			*(delimeter+i)=' ';
		}
		tokens[i]=*(delimeter+i);
	}
	
	for(i=0;tokens[i]!='\0';i++)
	{
		printf("%c",tokens[i]);
	}
	
	
	
}

void tokenize(char *delimeter,char stringToTokenize,char tokens[],int tokenCount)
{
	int i=0;
	
	for(tokenCount=0;*(delimeter+tokenCount)!='\0';tokenCount++)
	{
		
	}
	int size=tokenCount;
	
	for(i=0;i<size;i++)
	{
		if(stringToTokenize==*(delimeter+i))
		{
			*(delimeter+i)=' ';
		}
	}
	
	for(i=0;i<size;i++)
	{
		tokens[i]=*(delimeter+i);
		printf("%c ",tokens[i]);
	}

}
