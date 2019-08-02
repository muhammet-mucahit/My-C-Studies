#include<stdio.h>

size_t buyukluguBul(float *);

int main()
{
	float dizi[20];
	
	printf("Dizinin byte uzunlugu: %d"
	"\n\nBuyuklugu bul ile dondurulen byte sayisi: %d\n",sizeof(dizi),buyukluguBul(dizi));
}

size_t buyukluguBul(float *ptr)
{
	return sizeof(ptr);
}

//Bir hata var sanki sorsana bir bilene .......
