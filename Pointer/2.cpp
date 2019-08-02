#include<stdio.h>

void f(const int *);

int main()
{
	int y;
	f(&y);
}

void f(const int *xPtr)
{
	*xPtr=100;
}
