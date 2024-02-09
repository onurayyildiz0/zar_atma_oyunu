#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int zar1,zar2;
	int puan1,puan2,sonuc = 0;
	char isim1[50],isim2[50],secim;
	
	printf("birinci kullanici ismi:\n");
	gets(isim1);
	printf("ikinci kullanici ismi:\n");
	gets(isim2);
	
	printf("%s kullanici zar atsin mi ?\n",isim1);
	scanf("%c",&secim);
	
	if(secim != 'e')
	{
		printf("birinci kullanici atisi yapmadi");
	}
	else
	{
		srand(time(NULL ));
		zar1 = 1 + rand() %6;
		zar2 = 1 + rand() %6;
		puan1 = zar1 + zar2;
		
		printf("%s nin attigi zar sonuclari : %d ve %d\n",isim1,zar1,zar2);
		printf("ikinci kullanici zar atisi yapiyor \n");
		
		zar1 = 1 + rand() % 6;
		zar2 = 1 + rand() % 6;
		puan2 = zar1 + zar2;
		
		
		printf("%s nin attigi zar sonuclari : %d ve %d\n ",isim2,zar1,zar2);
		
		if(puan1 == 7 || puan1 == 11)
		{
			printf("%s kazandi\n",isim1);
			sonuc = 1;
			return 0;
		}
		else if(puan1 == 2 || puan1 == 3 || puan1 == 12){
			
			printf("%s kaybetti ",isim1);
			sonuc = 1;
			return 0;
		}
		
		if(puan2 == 7 || puan2 == 11)
		{
			printf("%s kazandi\n",isim2);
			sonuc = 1;
			return 0;
		}
		
		else if(puan2 == 2 || puan2 == 3 || puan2 == 12){
			
			printf("%s kaybetti ",isim2);
			sonuc = 1;
			return 0;
		}
		
		else
		{
			system("cls");
			printf("%s puani : %d\n",isim1,puan1);
			printf("%s puani : %d\n",isim2,puan2);
			
			int i;
			
			for(i=1;i<7;i++)
			{
				printf("%s  %d.zar atisi : ",isim1,i);
				zar1 = 1 + rand() %6;
				zar2 = 1 + rand() %6;
					printf("%d ve %d\n",zar1,zar2);
					
				if(puan1 == (zar1+zar2))
				{
					printf("%s kazandi",isim1);
					sonuc = 1;
					return 0;
				}
				
				printf("%s  %d.zar atisi : ",isim2,i);
				zar1 = 1 +rand()%6;
				zar2 = 1 + rand()%6;
					printf("%d ve %d\n",zar1,zar2);
					
					
				if(puan2 == (zar1 + zar2))	
				{
					printf("%s kazandi",isim2);
					sonuc = 1;
					return 0;
				}
			}
			
		}
		
		if(sonuc != 1)
		{
			printf("kazanan olmadi !!!");
		}
		
	}
	
	
	
	
	
	
	
}
