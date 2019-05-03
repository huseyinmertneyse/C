//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int i,j,sayi;
        printf("Lutfen sayi giriniz : ");
        scanf("%d",&sayi);
        for(i = 0;i < sayi;i++)
        {
                for(j = 0;j < sayi;j++)
                {
                        if(i == j || (i == (sayi-j-1)))
                        {
                                printf("\xDB");
                        }
                        else
                        {
                                printf("\xB0");
                        }
                }
                printf("\n");
        }

        getchar();
        getchar();
        return 0;
}
//---------------------------------------------------------------------------
 