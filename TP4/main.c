#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "fonctionsRectangles.h"

void Exo1()
{
    float longeur,largeur,surface,perimetre;
    printf("Rentre valeur de la longeur : ");
    scanf("%f",&longeur);
    printf("Rentre valeur de la largeur : ");
    scanf("%f",&largeur);
    CalculRectangle(longeur,largeur,&surface,&perimetre);
    printf("La surface est de : %f\nLe perimetre est de : %f\n",surface,perimetre);
}

void Exo2()
{
    float longeur,largeur,longeur2,largeur2;
    printf("Rentre valeur de la longeur du 1eme rectangle : ");
    scanf("%f",&longeur);
    printf("Rentre valeur de la largeur du 1eme rectangle : ");
    scanf("%f",&largeur);
    printf("Rentre valeur de la longeur du 2eme rectangle : ");
    scanf("%f",&longeur2);
    printf("Rentre valeur de la largeur du 2eme rectangle : ");
    scanf("%f",&largeur2);
    if(ComparaisonRectangle(longeur,largeur,longeur2,largeur2) == 1)
    {
        printf("Le rectangle 1 est plus grand que le rectangle 2");
    }
    else printf("Le rectangle 2 est plus grand que le rectangle 1");
}

void Exo3()
{
    float reel,complexe;
    printf("Entre la valeur de la parti reel de votre nombre complexe : ");
    scanf("%f",&reel);
    printf("Entre la valeur de la parti complexe de votre nombre complexe : ");
    scanf("%f",&complexe);
    printf("Le nombre complexe est : %f + i%f\n",reel,complexe);
    InvertionComplexe(&reel,&complexe);
    printf("Le nombre complexe apres invertion est : %f + i%f\n",reel,complexe);
}

void Exo4()
{
    int n = 5;
    float largeur[5],longeur[5];
    int indice[5];
    int i ;
    time_t t;
    for(i = 0;i < n;i++)
    {
        srand((unsigned) time(&t));
        largeur[i]= rand()%(10+1)+1;
        sleep(1);
        srand((unsigned) time(&t));
        longeur[i]= rand()%(10+1)+1;
        printf("Le rectangle n° %d est de longuer %f et de larguer %f \n",i+1,largeur[i],longeur[i]);
        sleep(1);
        indice[i] = i;
    }
    
    Tri(longeur,largeur,indice,n);
    printf("----------\ntableau apres tri \n----------- \n");
    for(i = 0;i < n;i++)
    {
        printf("Le rectangle n° %d est de longuer %f et de larguer %f \n",i+1,largeur[i],longeur[i]);
    }
}

int main(void)
{
    int selection = 0;
    int nbExercice = 4;
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
            default:
                return 0;
            break;
        }
    }
}