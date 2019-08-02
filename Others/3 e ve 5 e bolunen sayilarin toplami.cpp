#include<stdio.h>
#include<math.h>
int main()
{
	int i,toplam=0;
	for(i=1;i<1000;i++)
	{
		if(i%3==0 || i%5==0)
  		    {
   			    printf("%d\n",i);
   			    toplam+=i;
			}
			
	}
	printf("\nToplam : %d ",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
}
