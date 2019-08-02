#include <stdio.h>
 
void copy1( char * const s1, const char * const s2 );
void copy2( char *s1, const char *s2 );

int main()
{
	char string1[10];
	char *string2 = "Hello";
	char string3[10]; 
	char string4[] = "Good Bye";
	
	copy1( string1, string2 );
	printf( "string1 = %s\n", string1 );
	
	copy2( string3, string4 );
	printf( "string3 = %s\n", string3 );
	
	return 0; 
}

void copy1( char * const s1, const char * const s2 )
{
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];//s1 in yerine *(s1+i) de olur.
	}
}

void copy2( char *s1, const char *s2 )
{
	for(;(*s1=*s2)!='\0';s1++,s2++)
	{
		*s1=*s2;
	}
	
}




