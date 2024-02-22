#include<stdio.h>
#include<stdlib.h>
#include<time.h>                                      //0dan 1000e kadar secilen rastgele 100 adet sayiyi olusturdugumuz sayilar.txt dosyasina aktariyoruz

int main()
{
	FILE*dosya;
	dosya=fopen("sayilar.txt","w");
	
	srand(time(NULL));
	int sayi[100];
	int i;
	
	for(i=0;i<100;i++)
	{
		sayi[i]= rand()%1000;
	}
    
	for(i=0;i<100;i++)
	{
		fprintf(dosya,"%d\n",sayi[i]);
	}
	
	fclose(dosya);
	
}
