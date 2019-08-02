#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

int myStructCompare( struct simpleStruct *,struct simpleStruct *);

struct simpleStruct{
	
	char m2[5];
};

int main()
{
	struct simpleStruct myStruct1,myStruct2;
	
   strcpy(myStruct1.m2,"mucahit");
   strcpy(myStruct2.m2,"mucahit");	
	
	if(myStructCompare(&myStruct1,&myStruct2))
		printf("ELEMANLARI AYNIDIR");
	else 
		printf("ELEMANLARI AYNI DEGILDIR.");
	
}
int myStructCompare(struct simpleStruct *param1,struct simpleStruct *param2)
{
	int i,c=0;
	for(i=0;*(param1->m2+i)!='\0';i++)
	{
		if(*(param1->m2+i)==(*(param2->m2+i)))
		{
			c++;
		}
	}
	
	if(c==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
