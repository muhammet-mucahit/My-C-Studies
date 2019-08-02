#include<stdio.h>
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
	char string1[SIZE];
	char string2[SIZE];
	printf("Karakter giriniz : ");scanf("%s",&string1);
	printf("Karakter giriniz : ");scanf("%s",&string2);
	
	int b1=boyut(string1);
	int b2=boyut(string2);
	
	int i,j,b,c=0;
	
	for(i=0;i<b2;i++)
	{
		for(j=0;j<b1;j++)
		{
	 	    if(string2[i]==string1[j])
			{
				b=j;
				c++;
				for(int k=1;k<=b2;k++)
				{
					if(string2[i+k]==string1[j+k])
					{
						c++;
					}
				}
				if(c==b2)
				{
				    printf("%d",b);
  		        }
			}
			c=0;
		}
	}
	
	
	
	
	
	
	
	
	
}
