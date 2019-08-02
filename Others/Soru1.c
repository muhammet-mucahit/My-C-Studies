#include <stdio.h> 

void printCharacters( const char *sPtr );

int main()
{ 
	char string[] = "Mucahit Aktepe";
	
	printf( "The string is:\n" );
	printCharacters( string ); 
	printf( "\n" );  
	
	return 0; 
}

void printCharacters( const char *sPtr )    
{
	/*
	int i;
	for(i=0;*(sPtr+i)!='\0';i++)
	{
		printf("%c",*(sPtr+i));
	}
	*/
	
	for(;*sPtr!='\0';*sPtr++)
	{
		printf("%c",*sPtr);
	}
}                                                    
