#include<stdio.h>

void kopya1(char *, const char *);
void kopya2(char *, const char *);

int main()
{
	char string1[10],*string2="Merhaba";
	char string3[10],string4[]="Gule Gule";
	
	kopya1(string1,string2);
	printf("String 1 : %s\n",string1);
	
	kopya2(string3,string4);
	printf("String 3 : %s\n",string3);
	
}

void kopya1(char *s1, const char *s2)
{
	int i;
	
	for(i=0;(s1[i]=s2[i])!='\0';i++)
	{
		
	}
	
}
void kopya2(char *s1, const char *s2)
{
	for(;(*s1=*s2)!='\0';s1++,s2++)
	{
		
	}
}
