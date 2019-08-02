#include<stdio.h>

int main()
{
	int taban,us,sonuc=1;
	printf("Tabani giriniz : ");scanf("%d",&taban);
	printf("Ussu giriniz : ");scanf("%d",&us);
	
	for(int i=1;i<=us;i++)
	{
		sonuc=sonuc*taban;
	}
	printf("%d",sonuc);
	
	
	
	
	
	
	
	
}
