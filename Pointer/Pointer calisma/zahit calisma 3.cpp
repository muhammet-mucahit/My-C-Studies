/*
aþaðýdaki "olustur" isimli fonsiyonun "not" isimli bir dosya oluþturup içerisine "m" deðiþkeninde tutulan metni yazmasý beklenmektedir
*/

#include <stdio.h>

void olustur(FILE *file,char *m);

int main() {
	FILE *fp=NULL;
	char *metin = "uslu bir cocuk olursan sirinleri gorebilirsin";
	olustur(fp,metin);
	
}

void olustur(FILE *file,char *m)
{
	file=fopen("not","a+");
	int i;
	for(i=0;*(m+i)!='\0';i++)
	{
		fprintf(file,"%c",*(m+i));
	}
	
}
