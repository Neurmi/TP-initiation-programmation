#include<stdio.h>
#include<stdlib.h>
#include"../TP4/fonctionsRectangles.h"
#include"fonctionsTestRectangles.h"

 

int main(void)
{
    int selection = 0;

    while (1)
    {
        printf("Selection le numero de l'exercice : \n");
        printf("Quitte (0) \n");
        printf("Test retangle plus grand que sans fichier (1) \n");
        printf("Test de la fonction de tri sans fichier (2) \n");
        printf("Test retangle plus grand que avec fichier (3) \n");
        printf("Test de la fonction de tri avec fichier (4) \n");
        scanf("%d",&selection);

        switch (selection)
        {
            case 1:
                printf("le test de la fonction plus grand que : ");
                if(rectanglePlusGrandQueTest() == 1)
                {
                    printf("OK \n");
                }
                else printf("NOK \n");
            break;
            case 2:  
                printf("le test de la fonction tri : ");
                if(rectangleTriTest() == 1)
                {
                    printf("OK \n");
                }
                else printf("NOK \n");
            break;
            case 3:
                printf("le test de la fonction plus grand que : ");
                switch (rectanglePlusGrandQueTestavecFichier())
                {
                case 0 :
                    printf("NOK \n");
                    break;
                case 1 :
                    printf("OK \n");
                    break;
                case 2 :
                    printf("Probleme a l'ouverture du fichier \n");
                    break;
                }
            break;
            case 4:
                printf("le test de la fonction tri : ");
                switch (rectangleTriTestavecFichier())
                {
                case 0 :
                    printf("NOK \n");
                    break;
                case 1 :
                    printf("OK \n");
                    break;
                case 2 :
                    printf("Probleme a l'ouverture du fichier \n");
                    break;
                }
            break;
            default:
                return 0;
            break;
        }
    }
}


/* Bloc de code 1 */
    
        /* Tester l'exactitude de la fonction rectanglePlusGrandQue à partir de données prédéfinies dans la fonction de test */
    
    
    /* Bloc de code 2 */
    
        /* Tester l'exactitude de la fonction triRectangles à partir de données prédéfinies dans la fonction de test */
    
    
    /* Bloc de code 3 */
    
        /* Tester l'exactitude de la fonction rectanglePlusGrandQue à partir de données chargées depuis un fichier  */
    
    
    /* Bloc de code 4 */
    
        /* Tester l'exactitude de la fonction triRectangles à partir de données chargées depuis un fichier  */
    