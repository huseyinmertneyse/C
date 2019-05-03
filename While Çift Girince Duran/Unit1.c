//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int sayi = 0, cins = 0;
        do
        {
                printf("Lutfen Sayi Giriniz : ");
                scanf("%d",&sayi);
                cins = ((sayi % 2 == 0)?1:0);
                if(cins != 0)
                {
                        printf("Sayi cifttir.");
                        break;
                }
                else
                {
                        continue;
                }
        }while(1);
        getchar();
        getchar();
        return 0;
}
//---------------------------------------------------------------------------
 