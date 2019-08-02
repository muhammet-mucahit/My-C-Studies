#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 100


//OLASILIK ODEVI-BIR OKULUN CAN SISTEMINI YAZ!
// finalde 45 alti direkt FF unutma !
// ortalamasi 15 alti olan direkt FF unutma!
int main()
{
 	int vize[SIZE];
	int final[SIZE];
	float ortalama=0;
	srand(time(NULL));
	
	
	for(int i=0;i<SIZE;i++)
	{
		vize[i]=rand()%101;
		final[i]=rand()%101;
		ortalama=ortalama+(vize[i]+final[i])/2;
		printf("Vize=%d   Final=%d\n",vize[i],final[i]);
	}
	
	printf("\n");

	ortalama=ortalama/SIZE;
	printf("Ortalama -- %.2f\n",ortalama);// CC
	
	float gecici,standartsapma=0;
	
	for(int i=0;i<SIZE;i++)
	{
		gecici=(vize[i]+final[i])/2;
		standartsapma+=(ortalama-gecici)*(ortalama-gecici);
	}
	
	standartsapma=sqrt(standartsapma/SIZE);
	printf("Standart Sapma -- %.2f\n",standartsapma);
	
	int ustsinir1,ustsinir2,ustsinir3,ustsinir4,ortdeger,altsinir1,altsinir2,altsinir3;
	
	if(ortalama<=100 && ortalama>=80)
	{
 	    ustsinir1=90;// AA
 		ustsinir2=80;// BA
 		ustsinir3=75;// BB
		ustsinir4=70;// CB
		ortdeger=60; // CC
		altsinir1=50;// DC
		altsinir2=40;// DD
		altsinir3=30;// FD
	}
	
	else if(ortalama<80 && ortalama>70)
	{
		ustsinir1=59;// AA
		ustsinir2=54;// BA
		ustsinir3=49;// BB
		ustsinir4=44;// CB
		ortdeger=39; // CC
		altsinir1=34;// DC
		altsinir2=29;// DD
		altsinir3=24;// FD
	}
	
	else if(ortalama<=70 && ortalama>62.5)
	{
		ustsinir1=61;// AA
		ustsinir2=56;// BA
		ustsinir3=51;// BB
		ustsinir4=46;// CB
	 	ortdeger=41; // CC
		altsinir1=36;// DC
		altsinir2=31;// DD
		altsinir3=26;// FD
	}
	
	else if(ortalama<=62.5 && ortalama>57.5)
	{
		ustsinir1=63;// AA
		ustsinir2=58;// BA
		ustsinir3=53;// BB
		ustsinir4=48;// CB
		ortdeger=43; // CC
		altsinir1=38;// DC
		altsinir2=33;// DD
		altsinir3=28;// FD
	}
	
	else if(ortalama<=57.5 && ortalama>52.5)
	{
		ustsinir1=65;// AA
		ustsinir2=60;// BA
		ustsinir3=55;// BB
		ustsinir4=50;// CB
		ortdeger=45; // CC
		altsinir1=40;// DC
		altsinir2=35;// DD
		altsinir3=30;// FD
	}
	
	else if(ortalama<=52.5 && ortalama>47.5)
	{
		ustsinir1=67;// AA
		ustsinir2=62;// BA
		ustsinir3=57;// BB
		ustsinir4=52;// CB
		ortdeger=47; // CC
		altsinir1=42;// DC
		altsinir2=37;// DD
		altsinir3=32;// FD
	}
	
	else if(ortalama<=47.5 && ortalama>42.5)
	{
		ustsinir1=69;// AA
		ustsinir2=64;// BA
		ustsinir3=59;// BB
		ustsinir4=54;// CB
		ortdeger=49; // CC
		altsinir1=44;// DC
		altsinir2=39;// DD
		altsinir3=34;// FD
	}
	
	else if(ortalama<=42.5)
	{
		ustsinir1=71;// AA a
		ustsinir2=66;// BA b
		ustsinir3=61;// BB c
		ustsinir4=56;// CB d
		ortdeger=51; // CC e
		altsinir1=46;// DC f
		altsinir2=41;// DD g
		altsinir3=36;// FD h
	}
	
	float Tnotu;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0;
	
	printf("\nUst sinir1 : %d\n",ustsinir1);
	printf("Ust sinir2 : %d\n",ustsinir2);
	printf("Ust sinir3 : %d\n",ustsinir3);
	printf("Ust sinir4 : %d\n",ustsinir4);
	printf("Alt sinir1 : %d\n",altsinir1);
	printf("Alt sinir2 : %d\n",altsinir2);
	printf("Alt sinir3 : %d\n",altsinir3);
	
	float hbnNotu;
	
 	for(int i=0;i<SIZE;i++)
	{
		hbnNotu=(vize[i]+final[i])/2;
		Tnotu=((hbnNotu-ortalama)/standartsapma)*10+50;
		printf("\n%d-->%.2f\n",i+1,Tnotu);
		//if(final[i]<45)
		//{
		//	k++;
		//}
		//else
		//{
		if(Tnotu>=ustsinir1 && Tnotu<=100)
		{
			a++;
		}
		else if(Tnotu>=ustsinir2 && Tnotu<ustsinir1)
		{
			b++;
		}
		else if(Tnotu>=ustsinir3 && Tnotu<ustsinir2)
		{
			c++;
		}
		else if(Tnotu>=ustsinir4 && Tnotu<ustsinir3)
		{
			d++;
		}
		else if(Tnotu>=ortdeger && Tnotu<ustsinir4)
		{
			e++;
		}
		else if(Tnotu>=altsinir1 && Tnotu<ortdeger)
		{
			f++;
		}
		else if(Tnotu>=altsinir2 && Tnotu<altsinir1)
		{
			g++;
		}
		else if(Tnotu>=altsinir3 && Tnotu<altsinir2)
		{
			h++;
		}
		else 
		{
			k++;
		}
		//}
	}
	
	printf("\nAA--%d\n",a);
	printf("BA--%d\n",b);
	printf("BB--%d\n",c);
	printf("CB--%d\n",d);
	printf("CC--%d\n",e);
	printf("DC--%d\n",f);
	printf("DD--%d\n",g);
	printf("FD--%d\n",h);
	printf("FF--%d\n\n",k);
	
	
	printf("AA-");
	for(int i=0;i<a;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("BA-");
	for(int i=0;i<b;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("BB-");
	for(int i=0;i<c;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("CB-");
	for(int i=0;i<d;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("CC-");
	for(int i=0;i<e;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("DC-");
	for(int i=0;i<f;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("DD-");
	for(int i=0;i<g;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("FD-");
	for(int i=0;i<h;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	printf("FF-");
	for(int i=0;i<k;i++)
	{
		printf("* ");
	}
	printf("\n");
	
	
	
	
	
}


