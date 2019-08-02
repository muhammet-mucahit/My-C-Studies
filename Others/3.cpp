#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void mySubtract(const int *,const int *,int *);

int main()
{
	int myVar1=30;
	int myVar2=10;
	int myVar;
	
	mySubtract(&myVar1,&myVar2,&myVar);
		printf("CIKARMA ISLEMI SONUCU : %d",myVar);
}
void mySubtract(const int *param1,const int *param2,int *param3)
{
	*param3=*param1-*param2;
}
