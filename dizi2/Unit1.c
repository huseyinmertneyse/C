//---------------------------------------------------------------------------

#pragma hdrstop

#include <stdio.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int i , j ;
        char sehir[5][15];

        for(i = 0;i < 5;i++)
        {
                printf("Lutfen %d. Sehiri Giriniz : ",(i+1));
                scanf("%s",&sehir[i]);
                printf("\n");
        }


        for(i = 0;i < 5;i++)
        {
                printf("%s",sehir[i]);
                printf("\n");
        }

        getchar();
        getchar();
        return 0;
} 
