#include<stdio.h>
#include<math.h>
int main()
{
	int dizi[10],toplam=0;
	for(int i=0;i<10;i++)
	{
		printf("%d. sayiyi giriniz : ",i+1);scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	double ort=(double)toplam/10;
	printf("Ortalama : %.2lf",ort);
		
}
