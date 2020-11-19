#include <stdio.h>
#include <stdlib.h>

void Exo1()
{
    int table[11];
    int multiplication;
    int i;
    printf("Quelle table de multiplication a afficher");
    scanf("%d",&multiplication);
    for(i = 0;i < 11;i++)
    {
        table[i] = i * multiplication;
    }
    for(i = 0;i < 11;i++)
    {
        printf("%d x %d = %d\n",i,multiplication,table[i]);
    }

}

void Exo2()
{
    int taille = 11, i,multiplication;
    int *table;

    table = malloc(taille * sizeof(int));

     printf("Quelle table de multiplication a afficher");
    scanf("%d",&multiplication);
    for(i = 0;i < 11;i++)
    {
        table[i] = i * multiplication;
    }
    for(i = 0;i < 11;i++)
    {
        printf("%d x %d = %d\n",i,multiplication,table[i]);
    }
    free(table);
}

int main(void)
{
    int selection = 0;
    int nbExercice = 2;
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
            default:
                return 0;
            break;
        }
    }   
}