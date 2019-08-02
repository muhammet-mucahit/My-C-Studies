#include <stdio.h>
#define SIZE 40
int main()
{
	char string[SIZE];
	printf("Uzunluguna bakilmasini istediginiz kelimeyi giriniz : ");scanf("%s",&string);
	int i;
	for(i=0;string[i]!='\0';i++);

	printf("%d",i);
	
	
	
	
}
