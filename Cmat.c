#include<stdio.h>
#include<conio.h>

int main(){
	printf("---------------------------------------------|");
	printf("\n\n");
	printf("        MENU        ");
	printf("\n\n");

	printf("     1 toplama islemi\n");
	printf("     2 carpma islemi\n");
	printf("     3 kare alma islemi\n");
	printf("     4 kup alma islemi\n");
	printf("     5 denklem cozme (5x^2+4x+3)\n");
	printf("     islem yapmak istemiyorsaniz 0'a basiniz.\n\n");
	printf("---------------------------------------------|\n\n");
	
	
	int s1,s2,sonuc,secim;
	int i;
	
	for(i=0;i<6;i++)
	{
    printf("\n------------------------------------\n");
	printf("\nyapilacak islem numarasini giriniz: ");
	scanf("%d",&secim);
 

	if(secim==0)
	break;
	
	
	switch(secim)
	{
		
			
		case 1:
			printf("1. sayiyi girin: ");
			scanf("%d",&s1);
			printf("2. sayiyi girin: ");
			scanf("%d",&s2);
			sonuc=s1+s2;
			printf("sonuc: %d\n",sonuc);
			break;
		
		case 2:
			printf("1. sayiyi girin: ");
			scanf("%d",&s1);
			printf("2. sayiyi girin: ");
			scanf("%d",&s2);
			sonuc=s1*s2;
			printf("sonuc: %d\n",sonuc);
			break;
			
		case 3:
			printf("karesi alinacak sayiyi giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("sonuc: %d\n",sonuc);
			
		case 4:
			printf("kupu alinacak sayiyi giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("sonuc: %d\n",sonuc);
			
		case 5:
			printf("5x^2+4x+3 denklemi icin x sayisini giriniz: ");
			scanf("%d",&s1);
			sonuc=5*s1*s1+4*s1+3;
			printf("sonuc: %d\n",sonuc);
			
		default:
			printf("girilen numaraya karsilik bir islem yapilmamaktadir.\n\n");
	}

}
	
	getch();
	return 0;
}
