#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sifre=1234;
    int borc=1500;
    int bakiye=1000;
    printf("şifre giriniz");
    scanf("%d",&sifre);

    if(sifre=!1234){
        printf("yanlış şifre girdiniz");
    }
    else
        {
        int banka_islemi;
        printf("banka işlemi giriniz:\nKredi karti(1)\nBanka Karti(2)");
        scanf("%d",&banka_islemi);
        switch(banka_islemi)//case 1 kredi hesabı case 2 banka hesabı
        {
        case 1:
            printf("..KREDİ..");
            int islem1;
            printf("işlemi seçiniz:\nNakit avans(1)\nBorc sorgulama(2)\nBorc odeme(3)\nKart iade(4)");
            scanf("%d",&islem1);
            switch(islem1){
            case 1:
                printf("Nakit avans ");
                int nakit_avans_limiti=500;
                int cekilecek_tutar;
                printf("çekilecek tutarı giriniz:");
                scanf("%d",&cekilecek_tutar);
                if(cekilecek_tutar>nakit_avans_limiti){
                    printf("500 tl den fazla nakit avans çekemezsiniz");
            }
                else {
                    nakit_avans_limiti-=cekilecek_tutar;
                    printf("yeni nakit avans limitiniz:%d",nakit_avans_limiti);
                    }
            break;
            case 2:
                printf("borcunuz=%d",borc);
                break;

            case 3:
                printf("Borc odeme");
                int odenen_miktar;
                printf("parayı yatırnız");
                scanf("%d",&odenen_miktar);
                borc-=odenen_miktar;
                printf("yeni borcunuz:%d",borc);
                break;

            case 4:
                printf("kartınız iade ediliyor...");
                break;

            break;
    }
        case 2:
            printf("..BANKA..");
            printf("1:para çekme");
            printf("2:para yatırma");
            printf("3:bakiye sorgulama");
            printf("4: havale- eft işlemleri");
            printf("5:kart iade");
            int islem2;
            printf("işlemi seçiniz");
            scanf("%d",&islem2);
            switch(islem2){
            case 1:
                printf("para cekme");
                int cekilecek_tutar2;
                printf("çekilecek tutarı giriniz:");
                scanf("%d",&cekilecek_tutar2);
                if(cekilecek_tutar2>bakiye){

                    printf("bakiyeniz yetersizdir");
            }
                else{
                    bakiye-=cekilecek_tutar2;}
                break;
            case 2:
                printf("para yatirma");
                int yatirilacak_tutar2;
                printf("yatırılacak tutarı giriniz");
                scanf("%d",&yatirilacak_tutar2);
                bakiye+=yatirilacak_tutar2;
                printf("yeni bakiyeniiz=%d",bakiye);
                break;
            case 3:
                printf("bakiyeniz%d",bakiye);
                break;
            case 4:
                printf(" havale işlemleri.............");
                break;
            case 5:
                printf("kartınız iade ediliyor...");
                break;

            }
        break;}}

    return 0;
}
