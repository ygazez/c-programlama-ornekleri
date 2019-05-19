#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Calisan{
    char *isim[15];
    int no;
    int maas;

}Calisan;
void bilgigir(struct Calisan* insan){
    for(int i=0;i<3;i++){
        printf("CALiSAN BILGILERINI GIRINIZ..");
        printf("isim gir:");
        scanf("%s",&insan[i].isim);
        printf("no gir:");
        scanf("%d",&insan[i].no);
        printf("maas gir:");
        scanf("%d",&insan[i].maas);

}}
void bilgiyazdir(struct Calisan* insan){

    for(int i=0;i<3;i++)
    printf("%d.calýsanýnbilgileri==isim=%s,no=%d,maas=%d",i,insan[i].isim,insan[i].no,insan[i].maas);

}
void calisansirala(struct Calisan* insan){
    int dizi[3]={};
    int gecici;
    char gecici1[24];

    for(int i=0;i<3;i++){
        dizi[i]=insan[i].maas;
        }
  for(int j=0;j<2;j++){      
    for(int i=0;i<2-j;i++){
      
        if(dizi[i]>dizi[i+1]){//isimleri maas miktarına göre kücükten büyüğe sıralıyor
            gecici=dizi[i];
            dizi[i]=dizi[i+1];
            dizi[i+1]=gecici;
            strcpy(gecici1,insan[i].isim);
            strcpy(insan[i].isim,insan[i+1].isim);
            strcpy(insan[i+1].isim,gecici1);}
        }}
    for(int i=0;i<3;i++){
        printf("%d\n",dizi[i]);
        printf("%s\n",insan[i].isim);

       }
    }

int main()
{
    struct Calisan calisan[3];
    int secim;
    printf("menu--calisan bilgisi gir(1),calisanyazdir(2),calisansirala(3)");
    scanf("%d",&secim);
    switch(secim){
    case 1:
        bilgigir(calisan);
        break;
    case 2:
        bilgigir(calisan);
        bilgiyazdir(calisan);
        break;
    case 3:
        bilgigir(calisan);
        calisansirala(calisan);
        break;
    }

    return 0;
}
