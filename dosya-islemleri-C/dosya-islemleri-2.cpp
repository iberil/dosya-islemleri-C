#include<stdio.h>                                                    //sayilar.txt dosyasini okuyup icindeki asal sayilari olusturdugumuz sayilar2.txt dosyasina ekliyoruz
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main()
{
	FILE*dosya,*dos;
	dosya=fopen("sayilar.txt","r");
	dos=fopen("sayilar2.txt","w");
	int sayim[100];
	
	if(dosya== NULL)
		{
		    printf("hata");
	        getch();
		    return 0;
    	}
		
	   for(int i=0;i<100;i++)
	   {
		  fscanf(dosya,"%d",&sayim[i]);
	   }

     	for(int i=0;i<100;i++)
	   {
	   	    int sayac=0;
		    for(int j=2;j<sayim[i]/2;j++)
		    {
			    if(sayim[i]%j ==0)
			 {
				sayac++;
			 }
		    }
		    
		    if(sayac ==0)
		    {
		    	fprintf(dos,"%d\n",sayim[i]);
		    	printf("%d\n",sayim[i]);
			}
	    }
    
	fclose(dos);
	fclose(dosya);
}
