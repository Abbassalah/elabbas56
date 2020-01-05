#include <stdio.h>
#include <conio.h>
int main()

{
    unsigned int a,b,c,choise;
    unsigned char menu_1[20]="a.Good morning";
    a=puts(menu_1);
    unsigned char menu_2[20]="b.Good evening";
    b=puts(menu_2);
    unsigned char menu_3[20]="c.Exit program";
    c=puts(menu_3);

    printf("\t\t\t%%%%NOTICE%%%%\n\t\t'DON'T PRESS ENTER'\n\tIf you want choose any choise press[a,b,c]:\n");
   choise = getche();
    if (choise=='a')
    {

        system("cls");
        puts(menu_1);
    }
    else if (choise=='b')
    {
        system("cls");
        puts(menu_2);
    }
    else if (choise='c')
    {
        system("cls");
        printf("\t\tPRESS\n\t%%%%ENTER_KEY%%%%");
    }
    else
       {

        system("cls");
        printf("wrong choise!");}
    return 0;
}

