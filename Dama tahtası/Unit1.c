//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{

        int j,i,sayi;

        printf("Lutfen Sayi Giriniz : ");
        scanf("%d",&sayi);

        for(j = 0;j < sayi*2;j++)
        {

                for(i = 0;i < sayi;i++)
                {
                        if(j % 2 == 0)
                        {
                                printf("\xDB\xB0");
                        }
                        else
                        {
                                printf("\xB0\xDB");
                        }
                }
                printf("\n");
        }
        getchar();
        getchar();




        return 0;
}
//---------------------------------------------------------------------------
 