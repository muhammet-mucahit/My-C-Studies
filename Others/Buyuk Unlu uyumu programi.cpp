#include<stdio.h>
#include<math.h>
int main()
{
	int sesliharf=0,inceharf=0,kalinharf=0;
	char kelime[30];
	printf("Buyuk unlu uyumu kontrolu yapilmasini istediginiz kelimeyi giriniz :");
	scanf("%s",&kelime);
	
	for(int i=0;kelime[i]!='\0';i++)
	{
		if(kelime[i]=='a' || kelime[i]=='e' || kelime[i]=='o' || kelime[i]=='�' || kelime[i]=='u' || kelime[i]=='�' || kelime[i]=='i' )
		{
			sesliharf++;
		}
		if(kelime[i]=='a' || kelime[i]=='o' || kelime[i]=='u')
		{
			kalinharf++;
		}
		if(kelime[i]=='e' || kelime[i]=='i' || kelime[i]=='�' || kelime[i]=='�')
		{
			inceharf++;
		}
	}
	if(sesliharf==inceharf || sesliharf==kalinharf)
	{
		printf("Kelimeniz buyuk unlu uyumuna uyuyor.");
	}
	else
	{
		printf("Kelimeniz buyuk unlu uyumuna uymuyor ! ! ! ");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
