#include <stdio.h> 
#define SIZE 10

void bubbleSort( int * const array, const int size );

int main( void )
{
	int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 },i;
	
	printf( "Siralamadan once\n" );
	for ( i = 0; i < SIZE; i++ ) 
	{
		printf( "%4d", a[ i ] );
	}
	
	bubbleSort( a, SIZE ); 
	
	printf( "\nSiralamadan Sonra\n" );
	for ( i = 0; i < SIZE; i++ ) 
	{
		printf( "%4d", a[ i ] );
	}
	printf( "\n" );  
	
	return 0;
}

void bubbleSort( int * const array, const int size )
{
	void swap( int *, int *);
	
	int i,j;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(&array[j],&array[j+1]);
			}
		}
	}
}

void swap( int *element1Ptr, int *element2Ptr )
{                           
    int gecici=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=gecici;                                                               
}



