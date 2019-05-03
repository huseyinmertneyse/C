//---------------------------------------------------------------------------

#pragma hdrstop

#include <stdio.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int i , j ;
        int dizi[4][4]={{1,2,3,4},
                        {6,7,8,9},
                        {2,3,5,4},
                        {7,0,8,6}};
        int dizi2[4][4];
        int dizi3[4][4];

        for(i = 0;i < 4;i++)
        {
                for(j = 0;j < 4;j++)
                {
                        printf("%d\t",dizi[i][j]);
                        
                }
                printf("\n");
        }

        printf("\n\n");

        for(i = 0;i < 4;i++)
        {
                for(j = 0;j < 4;j++)
                {
                        dizi2[i][j] = dizi[j][i];
                        printf("%d\t",dizi2[i][j]);

                }
                printf("\n");
        }

        printf("\n\n");

        for(i = 0;i < 4;i++)
        {
                for(j = 0;j < 4;j++)
                {
                        dizi3[i][j] = dizi2[i][j] + dizi[i][j];
                        printf("%d\t",dizi3[i][j]);

                }
                printf("\n");
        }



        getchar();
        getchar();
        return 0;
} 
