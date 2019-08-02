#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int myStructCompare(const struct simpleStruct *,const struct simpleStruct *);

struct simpleStruct{
	int m1;
	char m2;
	float m3;
};

int main()
{
	struct simpleStruct myStruct1,myStruct2;
	
	myStruct1.m1=16;
	myStruct1.m2='z';
	myStruct1.m3=20.16;
	
	myStruct2.m1=16;
	myStruct2.m2='z';
	myStruct2.m3=20.16;
	
	if(myStructCompare(&myStruct1,&myStruct2))
		printf("ELEMANLARI AYNIDIR");
	else 
		printf("ELEMANLARI AYNI DEGILDIR.");
	
}

int myStructCompare(const struct simpleStruct *param1,const struct simpleStruct *param2)
{
	int c=0;
	
	if(param1->m1==param2->m1)
	{
		c++;
	}
	if(param1->m2==param2->m2)
	{
		c++;
	}
	
	if(param1->m3==param2->m3)
	{
		c++;
	}
	
	if(c==3)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}


