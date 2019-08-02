#include <stdio.h>
#define SIZE 20
int boyut(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		
	}
	return i;
}

int main()
{
	char number1[SIZE];
	char number2[SIZE];
	char number3[SIZE+1];
	
	printf("Sayi giriniz : ");scanf("%s",&number1);
	printf("Sayi giriniz : ");scanf("%s",&number2);
	
	int b1=boyut(number1);
	int b2=boyut(number2);
	
	int toplam=0,c=0,i=b1-1,j=b2-1;
	
	while(i>=0)
	{
		while(j>=0)
		{
			toplam=c;
			c=0;
			toplam+=number1[i]-'0'+number2[j]-'0';
			if(toplam>=10)
			{
				toplam-=10;
				c=1;
			}
			number3[j]=toplam+'0';
			i--;
			j--;
		}
	}
	printf("%s",number3);
	
	
	
	
	
}







