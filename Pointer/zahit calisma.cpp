//a�a��da verilen fonksiyonun i�ine girilen de�i�kenlerin de�erlerini birbiriyle de�i�tirmesi beklenmektedir.
//beklenen ��kt�(5-4)

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
