#include<stdio.h>

struct kart
{
	char *taraf;
	char *takim;
};

int main()
{
	struct kart a,*aPtr;	
	a.taraf="As";
	a.takim="Maca";
	
	aPtr=&a;
	
	printf("%s %s%s\n",a.takim,a.taraf,"i");
	printf("%s %s%s\n",aPtr->takim,aPtr->taraf,"i");
	printf("%s %s%s\n",(*aPtr).takim,(*aPtr).taraf,"i");
	
}
