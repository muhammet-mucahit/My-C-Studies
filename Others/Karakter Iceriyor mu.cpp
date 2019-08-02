#include<stdio.h>
#define SIZE 10

void boyut(char a[],char b[]);

int main()
{
	char kelime1[SIZE];
	char kelime2[SIZE];
	printf("1.Karakteri Giriniz : ");scanf("%s",&kelime1);
	printf("2.Karakteri Giriniz : ");scanf("%s",&kelime2);
	
	boyut(kelime1,kelime2);
}

void boyut(char a[],char b[])
{
	int i,j,x,y,z;
	for(i=0;a[i]!='\0';i++)
	{
		
	}
	for(j=0;b[j]!='\0';j++)
	{
		
	}
	int b1=i;
	int b2=j;
	
	printf("%d--%d\n",b1,b2);
	
	int c=0;
	
	for(x=0;x<b2;x++)
	{
		for(y=0;y<b1;y++)
		{
			if(b[x]==a[y])
			{
				for(z=0;z<b2;z++)
				{
					if(b[x+z]==a[y+z])
					{
						c++;
					}
				}
				if(c==b2)
				{
				    printf("Icerir.");break;
				}
				else
				{
				    printf("Icermez.");break;
				}
			}	
		}
		break;
	}
	
	
}
