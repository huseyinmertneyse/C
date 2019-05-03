//---------------------------------------------------------------------------

#pragma hdrstop

#include <stdio.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int i , j;
        int dizi[10][10];
        for(i = 0;i < 10;i++)
        {

                for(j = 0;j < 10;j++)
                {
                        if(i == j)
                        {
                                dizi[i][j] = 0;
                                printf("%d",dizi[i][j]);
                        }
                        else if(j < i)
                        {
                                dizi[i][j] = 2;
                                printf("%d",dizi[i][j]);
                        }
                        else
                        {
                                dizi[i][j] = 1;
                                printf("%d",dizi[i][j]);
                        }
                }
                printf("\n");
        }

        getchar();
        getchar();
        return 0;
}
