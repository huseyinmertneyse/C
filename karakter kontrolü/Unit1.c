//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------
#include <stdio.h>
#pragma argsused

char s[100];
int uzunluk();
typedef enum {true=1,false=0} bool;

int main(int argc, char* argv[])
{
        int u;
        printf("Stringi giriniz = ");
        //scanf("%s",s);
        gets(s);

        u = uzunluk();
        printf("%d",u);



        getch();
        return 0;
}
//---------------------------------------------------------------------------


int uzunluk(void)
{
        int i = 0;
        int sayac = 0;
        bool b = false;

        while(s[i] != '\0')
        {
                if(s[i] == 32 && !b)
                {
                        sayac++;
                        b=true;

                }
                else if(s[i] != 32 && b)
                {
                        printf("kelimenin ilk harfi %c\n",s[i]);
                        b=false;
                }

        i++;

        }
        return sayac + 1;
}




