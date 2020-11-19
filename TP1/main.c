#include <stdio.h>

void Exo1()
{
    printf("coucou \n");
}

void Exo2()
{
    int a;
    float b;
    printf("Valeur de A %d , Valeur de B %f\n",a,b);
    a = 3;
    b = 6.14;
    printf("Valeur de A %d , Valeur de B %f\n",a,b);
}

void Exo3()
{
    int x,y,z;
    x = 60000;
    y = x;
    z = /*(double)*/x + /*(double)*/y;
    printf("Valeur de de X %d \nValeur de de Y %d \nValeur de de Z %d\n",x,y,z);
}

void Exo4()
{
    float x,y,z;
    x = 60000;
    y = x;
    z = /*(double)*/x + /*(double)*/y;
    printf("Valeur de de X %f \nValeur de de Y %f \nValeur de de Z %f\n",x,y,z);
}

void Exo5()
{
    int x,y;
    float z;
    x = 2;
    y = 9;
    z = x * y;
    printf("Valeur de de X %d \nValeur de de Y %d \nValeur de de Z %f\n",x,y,z);
}

void Exo6()
{
    int x,y;
    x = 49384877246575;
    y = 49384877246576;

    printf("Valeur de de X-Y = %d\n",x-y);
}

void Exo7()
{
    int a;
    int* p;
    printf("[0x%12lx] : a = %d\n",(unsigned long int)&a, a);
    printf("[0x%12lx] : p = [0x%12lx]\n",(unsigned long int) &p, (unsigned long int)p);
    
    a=123;
    p=&a;
    printf("[0x%12lx] : a = %d\n",(unsigned long int)&a, a);
    printf("[0x%12lx] : p = [0x%12lx]\t *p = %d\n",(unsigned long int) &p, (unsigned long int)p, *p);
    
    *p=100;
    printf("[0x%12lx] : a = %d\n",(unsigned long int)&a, a);
    printf("[0x%12lx] : p = [0x%12lx]\t *p = %d\n",(unsigned long int) &p, (unsigned long int)p, *p);
}

void Exo8()
{
    int u;
    float v;
    printf("Donnez un entier : ");
    scanf("%d",&u);
    printf("Donnez un reel : ");
    scanf("%f",&v);
    printf("%d , %f\n",u,v);
}

int main(void)
{
    int selection = 0;
    int nbExercice = 8;
    int i;

    while (1)
    {
        printf("Selection le numero de l'exercice : \n");
        for(i = 1;i <= nbExercice;i++)
        {
            printf("Exo%d\n",i);
        }
        scanf("%d",&selection);

        switch (selection)
        {
            case 1:
                Exo1();
            break;
            case 2:
                Exo2();
            break;
            case 3:
                Exo3();
            break;
            case 4:
                Exo4();
            break;
            case 5:
                Exo5();
            break;
            case 6:
                Exo6();
            break;
            case 7:
                Exo7();
            break;
            case 8:
                Exo8();
            break;
            default:
                return 0;
            break;
        }
    }   
}