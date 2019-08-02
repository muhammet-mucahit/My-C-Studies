#include<stdio.h>

void tokenize(char *delimeter,char stringToTokenize,char tokens[],int tokenCount);

int main()
{
	char *isim="mucahit";
	char karakter='a';
	int boyut;
	char tokenler[10];
	
	for(boyut=0;*(isim+boyut)!='\0';boyut++)
	{
		printf("%c ",*(isim+boyut));
	}
	
	printf("\n%d\n\n",boyut);
	
	
	tokenize(isim,karakter,tokenler,boyut);
	
	
	
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


