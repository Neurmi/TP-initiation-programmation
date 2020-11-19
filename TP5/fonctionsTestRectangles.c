#include<stdio.h>
#include<stdlib.h>
#include"../TP4/fonctionsRectangles.h"
#include"fonctionsTestRectangles.h"

/* Inclure les fichiers header nécessaires */

/* Définition de la fonction test_rectanglePlusGrandQue */

int rectanglePlusGrandQueTest()
{
    int n = 6;
    float largeur[6] = {10,5,20,5,30,15}
    ,longeur[6] = {5,10,5,20,15,30}
    ,largeur2[6] = {20,5,10,5,30,30}
    ,longeur2[6] = {5,20,5,10,15,15};
    int resuslta[6] = {0,0,1,1,0,0};
    int i;
    for(i = 0;i < n;i++)
    {
         if(ComparaisonRectangle(longeur[i],largeur[i],longeur2[i],largeur2[i]) != resuslta[i])
         {
             return 0;
         }
    }
    return 1;
}

/* Définition de la fonction test_triRectangles */

int rectangleTriTest()
{
    int n = 5;
    float largeur[5] = {5,10,7,2,1}
    , longeur[5] = {3,4,5,3,8};
    int indice[5] = {0,1,2,3,4}
    , resulta[5] = {3,4,0,2,1};
    int i;
    Tri(largeur,longeur,indice,n);
    for(i = 0;i < n;i++)
    {
        if(indice[i] != resulta[i])
        {
            return 0;
        }
    }
    return 1;
}

/* Définition de la fonction test_rectanglePlusGrandQue_fichier */

int rectanglePlusGrandQueTestavecFichier()
{
    FILE* fichier = NULL;

    int n,i,y;

    float* largeur1,*longeur1,*largeur2,*longeur2;
    int *resuslta;

    fichier = fopen("TestRectPlusGrand.txt","r+");

    if(fichier != NULL)
    {
        fscanf(fichier,"%d",&n);
        largeur1 = malloc(n * sizeof(float));
        longeur1 = malloc(n * sizeof(float));
        largeur2 = malloc(n * sizeof(float));
        longeur2 = malloc(n * sizeof(float));
        resuslta = malloc(n * sizeof(int));
        for(i = 0;i <= 5;i++)
        {
            for(y = 0;y < n;y++)
            {
                switch (i)
                {
                case 0:
                    fscanf(fichier,"%f",&largeur1[y]);
                    break;
                case 1:
                    fscanf(fichier,"%f",&longeur1[y]);
                    break;
                case 2:
                    fscanf(fichier,"%f",&largeur2[y]);
                    break;
                case 3:
                    fscanf(fichier,"%f",&longeur2[y]);
                    break;
                case 4:
                    fscanf(fichier,"%d",&resuslta[y]);
                default:
                    break;
                }
            }
        }

        printf("\n");

        for(i = 0;i <= 5;i++)
        {
            for(y = 0;y < n;y++)
            {
                switch (i)
                {
                case 0:
                    printf("%f ",largeur1[y]);
                    break;
                case 1:
                    printf("%f ",longeur1[y]);
                    break; 
                case 2:
                    printf("%f ",largeur2[y]);
                    break;
                case 3:
                    printf("%f ",longeur2[y]);
                    break;
                case 4:
                    printf("%d ",resuslta[y]);
                default:
                    break;
                }
            }
            printf("\n");
        }

        for(i = 0;i < n;i++)
        {  
            if(ComparaisonRectangle(longeur1[i],largeur1[i],longeur2[i],largeur2[i]) != resuslta[i])
            {
                free(largeur1);
                free(longeur1);
                free(largeur2);
                free(longeur2);
                free(resuslta);
                fclose(fichier);
                return 0;
            }
        }

        free(largeur1);
        free(longeur1);
        free(largeur2);
        free(longeur2);
        free(resuslta);
        fclose(fichier);
        return 1;
    }
    else
    {
        fclose(fichier);
        
        return 2;
    }
    
    fclose(fichier);
}

int rectangleTriTestavecFichier()
{
    FILE* fichier = NULL;

    int n,i,y;

    float* largeur,*longeur;
    int *indice,*resulta;

    fichier = fopen("TestTri.txt","r+");

    if(fichier != NULL)
    {
        fscanf(fichier,"%d",&n);
        largeur = malloc(n * sizeof(float));
        longeur = malloc(n * sizeof(float));
        indice = malloc(n * sizeof(int));
        resulta = malloc(n * sizeof(int));
        for(i = 0;i <= 3;i++)
        {
            for(y = 0;y < n;y++)
            {
                switch (i)
                {
                case 0:
                    fscanf(fichier,"%f",&largeur[y]);
                    break;
                case 1:
                    fscanf(fichier,"%f",&longeur[y]);
                    break;
                case 2:
                    fscanf(fichier,"%d",&resulta[y]);
                    break;
                case 3:
                    indice[y] = y;
                default:
                    break;
                }
            }
        }

        printf("\n");

        for(i = 0;i <= 3;i++)
        {
            for(y = 0;y < n;y++)
            {
                switch (i)
                {
                case 0:
                    printf("%f ",largeur[y]);
                    break;
                case 1:
                    printf("%f ",longeur[y]);
                    break; 
                case 2:
                    printf("%d ",resulta[y]);
                    break;
                default:
                    break;
                }
            }
            printf("\n");
        }
        Tri(largeur,longeur,indice,n);

        for(i = 0;i <= 3;i++)
        {
            for(y = 0;y < n;y++)
            {
                switch (i)
                {
                case 0:
                    printf("%f ",largeur[y]);
                    break;
                case 1:
                    printf("%f ",longeur[y]);
                    break; 
                case 2:
                    printf("%d ",resulta[y]);
                    break;
                default:
                    break;
                }
            }
            printf("\n");
        }

        printf("\n");

        for(i = 0;i < n;i++)
        {
            if(indice[i] != resulta[i])
            {
                return 0;
            }
        }

        free(largeur);
        free(longeur);
        free(indice);
        free(resulta);
        fclose(fichier);
        return 1;
    }
    else
    {
        fclose(fichier);
        
        return 2;
    }
    
    fclose(fichier);
}

/* Définition de la fonction test_triRectangles_fichier */



