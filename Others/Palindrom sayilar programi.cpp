#include<stdio.h>
#include<math.h>
int main()
{
	//5 basamakli palindrom(sagdan soldan bakildiginda esit)sayilari veren kodu yaziniz.
	
	int sayi,a,b,c,d,e;
	for(int i=10000;i<100000;i++)
	{
		a=i/10000;
		b=(i%10000)/1000;
		c=((i%10000)%1000)/100;
		d=(((i%10000)%1000)%100)/10;
		e=(((i%10000)%1000)%100)%10;
		
		if(a==e && b==d)
		{
			printf("Palindrom sayi : %d\n",i);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
