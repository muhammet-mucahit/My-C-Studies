#include<stdio.h>
#include<math.h>
int main()
{
	// Klavyeden girilen sayiyi roma rakami seklinde ekrana yazdiran program.
	// 1-I 2-II 3-III 4-IV 5-V 6-VI 7-VII 8-VIII 9-IX 10-X 11-XI 12-XII 15-XV
	
	int sayi,a,b,c;
	printf("Roma rakamina cevirmeyi istediginiz sayiyi giriniz : ");scanf("%d",&sayi);
	a=sayi/100;
	b=(sayi%100)/10;
	c=(sayi%100)%10;
	
	if(sayi<1000)
	{
 	switch(a)
	{
		case 1 : printf("C");break;
		case 2 : printf("CC");break;
		case 3 : printf("CCC");break;
		case 4 : printf("CD");break;
		case 5 : printf("D");break;
		case 6 : printf("DC");break;
		case 7 : printf("DCC");break;
		case 8 : printf("DCCC");break;
		case 9 : printf("CM");break;
	}
	
	switch(b)
	{
		case 1 : printf("X");break;
		case 2 : printf("XX");break;
		case 3 : printf("XXX");break;
		case 4 : printf("XL");break;
		case 5 : printf("L");break;
		case 6 : printf("LX");break;
		case 7 : printf("LXX");break;
		case 8 : printf("LXXX");break;
		case 9 : printf("XC");break;
	}
	
	switch(c)
	{
		case 1 : printf("I");break;
		case 2 : printf("II");break;
		case 3 : printf("III");break;
		case 4 : printf("IV");break;
		case 5 : printf("V");break;
		case 6 : printf("VI");break;
		case 7 : printf("VII");break;
		case 8 : printf("VIII");break;
		case 9 : printf("IX");break;
	}
	}
	else
	{
		printf(" Lutfen 1 ile 1000 arasinda bir deger giriniz ! ! ! ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
