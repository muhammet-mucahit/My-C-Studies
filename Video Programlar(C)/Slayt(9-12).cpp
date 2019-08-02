#include<stdio.h>
#include<math.h>
int main()
{
	/*
	//while, do while, for;
	while(kosul)
	{
		islemler;
		sayac(i)++;
	}
	
	int i=1;
	while(i<10)
	{
		printf("Merhaba Dunya\n");
		i++;
	}
	
	int i=1,kare;
	while(i<=10)
	{
		kare=i*i;
		printf("%d %d\n",i,kare);
		i++;
	}
	
	int i=1;
	while(i<=10)
	{
		printf("1 x %d = %d\t",i,i*1);
		printf("2 x %d = %d\t",i,i*2);
		printf("3 x %d = %d\t",i,i*3);
		printf("4 x %d = %d\t",i,i*4);
		printf("5 x %d = %d\n",i,i*5);
		//printf("6 x %d = %d\n",i,i*6);
		//printf("7 x %d = %d\t",i,i*7);
		//printf("8 x %d = %d\t",i,i*8);
		//printf("9 x %d = %d\n",i,i*9);
		i++;
	}
	
	
	int i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("%d sayisi cifttir.\n",i);
			
		}
		else
		{
			printf("%d sayisi tektir.\n",i);
			
		}
		i++;
	}	
	
	int i=1,sayi;
	while(i<=10)
	{
		printf("\nSayi giriniz :");scanf("%d",&sayi);
		printf("%d nin karekoku = %.1f",sayi,sqrt(sayi));
		i++;
		
	}	
	
	
	do
	{
		islemler;
	}
	while(kosul);
	
	
	int sayi;
	do
	{
	printf("\nBir sayi giriniz :"); scanf("%d",&sayi);
	printf("%d nin 2 kati = %d",sayi,sayi*2);
	}while(sayi>0);
	
	
	//SLAYT 10
	
	int i;
	for(i=0;i<10;i++)
	{
		islemler..;
	}
	
	
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d-Merhaba Dunya\n",i);
	}
	
	
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d'nin kupu : %d\n",i,i*i*i);
	}
	
	
	int i,sayi;
	printf("Bir sayi giriniz :");scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		printf("%d'nin karekoku : %.1f\n",i,sqrt(i));
	}
	
	
	int i,sayi;
	printf("Bir sayi giriniz : ");scanf("%d",&sayi);
	for(i=sayi;i>=0;i--)
	{
		printf("%d\n",i);
	}
	
	
	int i,toplam=0;
	for(i=1;i<=10;i++)
	{
		toplam+=i;
		
		//toplam=toplam+1;
		//toplam=toplam+2;
		//toplam=toplam+3;
		//toplam=toplam+4;
		//.
		//.
		//.
		//toplam=toplam+10;
	}
	printf("Toplam : %d\n",toplam);
	
	
	int i,sayi,toplam=0;
	printf("Bir sayi giriniz : ");scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		toplam+=i;
			
	}
	printf("Toplam : %d",toplam);
	
	
	int i,s1,s2,toplam=0;
	printf("2 adet sayi giriniz : ");scanf("%d%d",&s1,&s2);
	
	if(s1<s2)
	{
		for(i=s1;i<=s2;i++)
		{
			toplam+=i;
		}
	}
	else
	{
		for(i=s1;i>=s2;i--)
		{
			toplam+=i;
		}
	}
	printf("Toplam : %d",toplam);
	
	//SLAYT 11
	
	int i,ciftsayi=0,teksayi=0;
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			ciftsayi+=1;
		}	
		else
		{
			teksayi+=1;
		}
	}
	printf("Cift sayi : %d\n",ciftsayi);
	printf("Tek sayi : %d",teksayi);
	
	int i,s1,s2,ciftsayi=0,teksayi=0;
	printf("2 adet sayi giriniz : ");scanf("%d%d",&s1,&s2);
	if(s1<s2)
	{
		for(i=s1;i<=s2;i++)
		{
			if(i%2==0)
			{
				ciftsayi++;
			}
			else
			{
				teksayi++;
			}
		}
	}
	else
	{
		for(i=s1;i>=s2;i--)
		{
			if(i%2==0)
			{
				ciftsayi+=1;
			}
			else
			{
				teksayi+=1;
			}
		}
	}
	printf("Tek sayi adedi : %d\n",teksayi);
	printf("Cift sayi adedi : %d",ciftsayi);
	
	int sayi,i,max=0;
	for(i=1;i<=10;i++)
	{
		printf("Sayi giriniz : ");scanf("%d",&sayi);
		if(sayi>max)
		{
			max=sayi;
		}
	}
	printf("%d",max);
	
	int sayi,i,min=100000000;
	for(i=1;i<=10;i++)
	{
		printf("Sayi giriniz : ");scanf("%d",&sayi);
		if(min>sayi)
		{
			min=sayi;
		}
	}
	printf("%d",min);
	
	
	int i,faktoriyel=1;
	for(i=1;i<=5;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("%d'nin faktoriyeli : %d",i-1,faktoriyel);
	
	
	int i,sayi,faktoriyel=1;
	printf("Sayi giriniz : ");scanf("%d",&sayi);
	for(i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	printf("%d'nin faktoriyeli : %d",i-1,faktoriyel);
	
	
	//SLAYT 12
	
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=5;j++)
		{
			printf("Merhaba Dunya\n");
		}
		printf("mucahitaktepe.com\n");
	}
	
 	
 	for(int i=1;i<=10;i++)
 	{
 		for(int j=1;j<=10;j++)
 		{
 			printf("%d*%d=%d\t",i,j,i*j);
 		}
 		printf("\n\n");
	}
	
	for(int i=1;i<=10;i++)
    {
 		for(int j=1;j<=20;j++)
 		{
 			printf("*");
	    }
	    printf("\n");
	}
	
	int i,j,k,z;
	for(i=0;i<=0;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("*\t*\n");
		}
		for(k=0;k<=0;k++)
		{
			printf("---------\n");
		}
		for(z=0;z<=3;z++)
		{
			printf("*\t*\n");
		}
	}
	
	
	
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
