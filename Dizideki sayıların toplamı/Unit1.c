//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        int i,s=0;
        int dizi[10] = {1,2,3,4,5,6,7,8,9,10};
        for(i = 0;i < 10;i++)
        {
                if(i % 2 == 0)
                {
                        printf("%d\n",dizi[i]);
                }
                s = s + dizi[i];
        }
        printf("Dizideki Sayilarin Toplami = %d",s);
        getchar();
        getchar();
        return 0;
}
//---------------------------------------------------------------------------
 