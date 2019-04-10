#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
   int toplam=0;
   while (toplam==0){
        printf("bir sayi gir:\n");
        scanf("%d",&sayi);
        for (int i=1;i<sayi;i++){
            if(sayi%i==0){
                toplam+=sayi;

            }
        if(toplam==sayi){

            printf("mükemmel sayi\n");
            break;


    }
        else{
            printf("mükemmel sayi degil\n");
            break;
    }
   }
    }
    return 0;}
