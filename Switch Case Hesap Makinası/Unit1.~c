//---------------------------------------------------------------------------

#pragma hdrstop
#include <stdio.h>
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        double a = 0, b = 0, s = 0;
        char i,c;

        bas:

        printf("Sayilari ve Ýslemi Giriniz :  ");
        scanf("%lf %c %lf",&a,&i,&b);

        switch(i)
        {
                case '+':
                s = a + b ;
                printf("Sayilarin Toplami : %lf\n",s);
                break;

                case '-':
                s = a - b ;
                printf("Sayilarin Farki : %lf\n",s);
                break;

                case '*':
                s = a * b ;
                printf("Sayilarin Carpimi : %lf\n",s);
                break;

                case '/':
                s = a / b ;
                printf("Sayilarin Bolumu : %lf\n",s);
                break;

                default:
                printf("Yanlis Karakter Girdiniz\n");
                break;

        }
        printf("Cikmak icin c ye Basiniz : ");
        scanf("%c",&c);

        if(c == 'c')
        {
                return 0;
        }
        else
        {
                goto bas;
        }
        getchar();
        getchar();
        return 0;
}
//---------------------------------------------------------------------------
