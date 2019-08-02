#include<stdio.h>
#include<math.h>
//T(285) = P(165) = H(143) = 40755
//Incele ! ! !

int pentagonal(long long value);

int main()
{
	
 	long long result=0;
	int i=143;
	
	while(true) 
	{
    	i++;
    	result=i*(2*i-1);
    	
    	if(pentagonal(result)) 
		{
			printf("%d\n",result);
			printf("***%d***",i);
        	break;
   	    }
    }
}

int pentagonal(long long value)
{

	double penTest=(sqrt(1+24*value)+1)/6;
    return penTest==((int)penTest);

}


