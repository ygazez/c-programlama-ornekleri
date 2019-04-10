#include <stdio.h>
#include <stdlib.h>

int main()
{


    int sayi=25;
    int tahmin;
    int devam=1;

    while(devam==1){
    printf(" tahmininizi giriniz:");
    scanf("%d",&tahmin);

        while(tahmin != sayi){
            if(tahmin<sayi){
                printf("daha büyük bir sayı gir:");
                scanf("%d",&tahmin);

            }
            else{
                printf("daha kücük bir sayi gir:");
                scanf("%d",&tahmin);
            }
        }
        printf("kazandın");
        printf("devam etmek istiyor musun?(evet(1),hayir(2))");
        scanf("%d",&devam);
        }
        printf("oyun bitti");

return 0;
    }
