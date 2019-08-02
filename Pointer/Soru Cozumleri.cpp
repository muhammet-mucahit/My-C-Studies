#include<stdio.h>

int main()
{
	float sayi1=7.3;	
	float *fPtr;
	fPtr=&sayi1;
	
	printf("%x\n",fPtr);
	
	float sayi2=*fPtr;
	
	printf("%.2f\n",sayi2);
	printf("%x\n",&sayi1);
	printf("%x\n",&fPtr);
	printf("%.2f",*fPtr);
}
