//aþaðýda verilen fonksiyonun içine girilen deðiþkenlerin deðerlerini birbiriyle deðiþtirmesi beklenmektedir.
//beklenen çýktý(5-4)

#include <stdio.h>

void degistir(int *x, int *y); 


int main() {

	int a = 4;
	int b = 5;

	degistir(&a, &b);

	printf("%d-%d", a, b);

}

void degistir(int *x, int *y)
{
	int gecici;
	gecici=*x;
	*x=*y;
	*y=gecici;
}
