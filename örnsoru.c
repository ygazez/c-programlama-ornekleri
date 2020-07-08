//Genel terimi,  
//𝑎𝑛 = {
 //        3𝑛 − 1,         𝑛 𝑡𝑒𝑘 𝑖𝑠𝑒
    //     2𝑛 + 𝑛,         𝑛 ç𝑖𝑓𝑡 𝑖𝑠𝑒 
//şeklinde tanımlanan 𝑎𝑛 dizisi için ilk n teriminin toplamını (𝑎1 + 𝑎2+ ...+ 𝑎𝑛) ve 
//çarpımını (𝑎1𝑎2 ...𝑎𝑛) bulan bir C programı yazınız. n pozitif tamsayısının değeri kullanıcıdan alınacaktır.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int y;
   int toplam=0;
   int carpim=1;

   printf("n i giriniz:");
   scanf("%d",&n);

   while(n>0){
    if(n%2==0){
        y=pow(2,n)+n;
    }
    else{
        y=pow(3,n)-1;
    }
    toplam+=y;
    carpim=carpim*y;
    n=n-1;


    }
    printf("toplam =%d \n",toplam);
    printf("carpim= %d",carpim);

    return 0;

}
