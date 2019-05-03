//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int i,kontrol = 0,sayac = 0;
        int dizi[5];
        printf("Lutfen 5 deger giriniz : ");

        for(i = 0;i < 5;i++)
        scanf("%d",&dizi[i]);

        printf("\n\nLutfen kontrol edilecek sayiyi giriniz : ");
        scanf("%d",&kontrol);

        for(i = 0;i < 5;i++)
        {
                if(dizi[i] == kontrol)
                {
                        sayac++;
                        printf("Dizinin %d. elemani",(i+1));
                }
        }
        if(sayac == 0)
        {
                printf("Girdiginiz deger yoktur");
        }
        else
        {
                printf("\nDizide elemandan %d kadar vardir ",sayac);
        }

        getchar();
        getchar();

        return 0;
}
//---------------------------------------------------------------------------
 