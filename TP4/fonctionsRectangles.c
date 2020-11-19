#include<stdio.h>
#include"fonctionsRectangles.h"

void CalculRectangle(float longeur,float largeur,float* surface,float* perimetre)
{
    *surface = (longeur * largeur);
    *perimetre = (2 * (longeur + largeur));
}

int ComparaisonRectangle(float longeur,float largeur,float longeur2,float largeur2)
{
    if((longeur * largeur) > (longeur2 * largeur2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void InvertionComplexe(float *reel,float *complexe)
{
    float tmp;
    tmp = *reel;
    *reel = *complexe;
    *complexe = tmp; 
}

void Invertion(int *reel,int *complexe)
{
    int tmp;
    tmp = *reel;
    *reel = *complexe;
    *complexe = tmp; 
}

void Tri(float longeur[], float largeur[],int indice[], int n)
{

   int passage = 0;
   int permutation = 1;
   int i;

   while (permutation == 1)
   {
       permutation = 0;
       passage++;
       for(i = 0;i<n-passage;i++)
       {
        if(ComparaisonRectangle(longeur[i],largeur[i],longeur[i+1],largeur[i+1]) == 1)
            {
                permutation = 1;
                InvertionComplexe(&longeur[i],&longeur[i+1]);
                InvertionComplexe(&largeur[i],&largeur[i+1]);
                Invertion(&indice[i],&indice[i+1]);
                
            }
            printf("%d \n",indice[i]);
       }
   }
   
}
