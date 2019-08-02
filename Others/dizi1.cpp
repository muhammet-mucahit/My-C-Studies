#include<stdio.h>

void diziyiYazdir(const int [][3]);

int main()
{
	int dizi1[2][3]={{1,2,3},{4,5,6}};
	int dizi2[2][3]={1,2,3,4,5};
	int dizi3[2][3]={{1,2},{4}};
	
	
	printf("Satir satir dizi1 elemanlari : \n");
	diziyiYazdir(dizi1);
	
	printf("\n\nSatir satir dizi2 elemanlari : \n");
	diziyiYazdir(dizi2);
	
	printf("\n\nSatir satir dizi3 elemanlari : \n");
	diziyiYazdir(dizi3);
}

void diziyiYazdir(const int a[][3])
{
	int i,j;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
