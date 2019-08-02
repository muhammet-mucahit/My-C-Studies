#include<stdio.h>

//int palindrom(int);
void palindrom(int);
int main()
{
	int sayi;
	printf("Sayi giriniz : ");scanf("%d",&sayi);
	/*
	if(palindrom(sayi)==1)
	{
		printf("Palindrom");
	}
	else
	{
		printf("palindrom degil");
	}
	*/
	palindrom(sayi);
}
/*
int palindrom(int a)
{
	int c=10,b=1,ilk,son;
	int tut=a;
	while(c<=a)
	{
		tut/=10;
		c*=10;
	} 
	while(c>b)
	{
		c=c/10;
		ilk=a/c;
		ilk=ilk%10;
		b*=10;
		son=a%b;
		son=son/(b/10);
		if(ilk!=son)
		{
			return -1;
		}
	}
	return 1;
*/	
void palindrom(int a)
{
	int c=10,b=1,ilk,son;
	int tut=a;
	while(c<=a)
	{
		tut/=10;
		c*=10;
	} 
	int kontrol=1;
	while(c>b)
	{
		c=c/10;
		ilk=a/c;
		ilk=ilk%10;
		b*=10;
		son=a%b;
		son=son/(b/10);
		if(ilk!=son)
		{
			kontrol=0;break;
		}
	}
	if(kontrol==0)
	{
		printf("palindrom degil");
	}
	else
	{
		printf("palindrom");
	}
	
	
	
	
}

