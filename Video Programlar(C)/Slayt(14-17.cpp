#include<stdio.h>
#include<math.h>
int main()
{
	/*
	int dizi[5];
	dizi[0]=5;
	dizi[1]=8;
	dizi[2]=9;
	dizi[3]=15;
	dizi[4]=21;
	printf("%d\n\n",dizi[0]);
	
	float dizi1[5];
	dizi1[0]=15.0;
	dizi1[1]=25.15;
	dizi1[2]=14.18;
	dizi1[3]=22.10;
	dizi1[4]=78.15;
	printf("%.2f",dizi1[3]);
	
	int dizi2[]={1,2,3,4,5,6,7,8,9};
	printf("%d",dizi2[8]);
	
	int dizi3[5]={2,3};
	printf("%d",dizi3[2]);
	
	int dizi[5]={1,2,3,4,5};
	dizi[0]=10;
	dizi[0]=16;
	dizi[2]=dizi[1]*5;
	printf("%d",dizi[2]);
	
	int dizi[]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		printf("%d\n",dizi[i]);
	}
	
	
	int dizi[]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		printf("%d\n",dizi[i]*dizi[i]);
	}
	
	int toplam=0;
	int dizi[]={2,4,5,10};
	for(int i=0;i<4;i++)
	{
		toplam+=dizi[i];
		
	}
	printf("%d\n",toplam);
	
	
	int dizi[5];
	printf("5 adet sayi giriniz :\n");
	for(int i=0;i<5;i++)
	{
		printf("%d. sayi :",i+1);
		scanf("%d",&dizi[i]);
		
	}
	for(int j=0;j<5;j++)
	{
		printf("Dizinin %d. elemani= %d\n",j,dizi[j]);
	}
	
	
	int dizi[5];
	printf("5 adet sayi giriniz :\n");
	for(int i=0;i<=4;i++)
	{
		printf("\n%d. sayi : ",i+1);scanf("%d",&dizi[i]);
	}
	for(int i=0;i<=4;i++)
	{
		printf("\n%.2f",sqrt(dizi[i]));
	}
	
	int dizi[5],toplam=0;
	printf("5 adet sayi giriniz :\n");
	for(int i=0;i<=4;i++)
	{
		printf("\n%d. sayi : ",i+1);scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	printf("\nToplam : %d",toplam);
	
	//SLAYT 15
	
	int ogrnotu[10];
	float toplam=0;
	for(int i=0;i<10;i++)
	{
		printf("%d. ogrencinin notunu giriniz : ",i+1);scanf("%d",&ogrnotu[i]);
		toplam+=ogrnotu[i];
	}
	printf("Sinif ortalamasi : %.2f",toplam/10);
	
	
	int ogrnotu[10],aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
	for(int i=0;i<10;i++)
	{
		printf("%d. ogrencinin notu : ",i+1);scanf("%d",&ogrnotu[i]);
		if(ogrnotu[i]>=90 && ogrnotu[i]<=100)
		{
			aanotu++;
		}
		else if(ogrnotu[i]>=70 && ogrnotu[i]<=89)
		{
			bbnotu++;
		}
		else if(ogrnotu[i]>=50 && ogrnotu[i]<=69)
		{
			ccnotu++;
		}
		else if(ogrnotu[i]>=30 && ogrnotu[i]<=49)
		{
			ddnotu++;
		}
		else
		{
			ffnotu++;
		}
	}
	printf("%d\n%d\n%d\n%d\n%d",aanotu,bbnotu,ccnotu,ddnotu,ffnotu);
	
	
	int aanotu=0,bbnotu=0,ccnotu=0,ddnotu=0,ffnotu=0;
	int ogrvize[10],ogrfinal[10];
	float ortalama[10];
	for(int i=0;i<10;i++)
	{
		printf("\n%d. ogrencinin vize notu : ",i+1);scanf("%d",&ogrvize[i]);
		printf("\n%d. ogrencinin final notu : ",i+1);scanf("%d",&ogrfinal[i]);
		ortalama[i]=(ogrvize[i]*0.4+ogrfinal[i]*0.6);
		printf("\nOrtalama : %.2f\n",ortalama[i]);
		
		if(ortalama[i]>=90 && ortalama[i]<=100)
		{
			aanotu++;
		}
		else if(ortalama[i]>=70 && ortalama[i]<=89)
		{
			bbnotu++;
		}
		else if(ortalama[i]>=50 && ortalama[i]<=69)
		{
			ccnotu++;
		}
		else if(ortalama[i]>=30 && ortalama[i]<=49)
		{
			ddnotu++;
		}
		else
		{
			ffnotu++;
		}
	}
	printf("\nAA notu alan kisi sayisi=%d\n",aanotu);
	printf("BB notu alan kisi sayisi=%d\n",bbnotu);
	printf("CC notu alan kisi sayisi=%d\n",ccnotu);
	printf("DD notu alan kisi sayisi=%d\n",ddnotu);
	printf("FF notu alan kisi sayisi=%d\n",ffnotu);
	
	//SLAYT 16
	
	//int matris[satirsayisi][sutun sayisi];
	int matris[2][2];
	matris[0][0]=1;
	matris[0][1]=2;
	matris[1][0]=3;
	matris[1][1]=4;
	printf("%d\n",matris[1][0]);
	
	matris[1][0]=matris[0][1]*2+matris[1][1];
	
	printf("%d\n",matris[1][0]);
	
	printf("%d",matris[1][0]*5);
	
	int matris1[2][3]={{1,2,3},{3,4,5}};
	printf("%d ",matris1[0][0]);
	printf("%d ",matris1[0][1]);
	printf("%d\n",matris1[0][2]);
	printf("%d ",matris1[1][0]);
	printf("%d ",matris1[1][1]);
	printf("%d",matris1[1][2]);
	
	
	int matris[4][4]={{1,2,3,4},{4,5,6,7},{6,7,8,9},{8,9,10,11}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}
	
	
	int matris[4][4];
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Sayi giriniz : ");scanf("%d",&matris[i][j]);
		}
	}
	printf("\n");
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
 	
 	//SLAYT 17
 	
 	int fabrika[2][5];
 	for(int i=0;i<2;i++)
 	{
 		for(int j=0;j<5;j++)
 		{
 			printf("%d. fabrikanin %d. iscisinin maasini giriniz : ",i+1,j+1);scanf("%d",&fabrika[i][j]);
			if(fabrika[i][j]<1000)
			{
				fabrika[i][j]+=fabrika[i][j]*0.1;
			}	
 		}
	}
	printf("\n\n*********************************\n\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d. fabrikanin %d. iscisinin maasi : %d TL\n",i+1,j+1,fabrika[i][j]);
		}
	}
	
	
	int a[2][2][5],b=0,c=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<5;k++)
			{
				printf("%d. okulun %d. sinifindaki %d. ogrencinin notunu giriniz : ",i+1,j+1,k+1);
				scanf("%d",&a[i][j][k]);
				if(a[i][j][k]>=60)
				{
					printf("Gecti ! ! ! \n");
					b+=1;
				}
				else
				{
					printf("Kaldi ! ! ! \n");
					c+=1;
				}
			}
		}
	}
	printf("Sinifi gecenlerin sayisi = %d\n",b);
	printf("Sinifta kalanlarin sayisi = %d",c);
	*/
	
	
	
	
	
	
}
