#include<stdio.h>

int main()
{
	char c;
	short s;
	int i;
	long l;
	float f;
	double d; 
	long double ld;
	int dizi[20],*ptr=dizi;
	
	printf("sizeof c : %d -- sizeof(char) : %d\n",sizeof c,sizeof(char));
	printf("sizeof s : %d -- sizeof(short) : %d\n",sizeof s,sizeof(short));
	printf("sizeof i : %d -- sizeof(int) : %d\n",sizeof i,sizeof(int));
	printf("sizeof l : %d -- sizeof(long) : %d\n",sizeof l,sizeof(long));
	printf("sizeof f : %d -- sizeof(float) : %d\n",sizeof f,sizeof(float));
	printf("sizeof d : %d -- sizeof(double) : %d\n",sizeof d,sizeof(double));
	printf("sizeof ld : %d -- sizeof(long double) : %d\n",sizeof ld,sizeof(long double));
	printf("sizeof dizi : %d\n",sizeof dizi);
	printf("sizeof ptr : %d\n",sizeof ptr);
	
	
	//sizeof dan sonra 4 cikmasi gerek benimkinde 8 cikiyor neden ? sor ! ! ! ! ! ! !
	
}
