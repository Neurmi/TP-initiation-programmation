#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

void Convertion(int Oboles,int *Drachmes,int * reste)
{
    *Drachmes =  (float)Oboles / 6;
    *reste = Oboles % 6;
}

void Exo1()
{
    int Oboles;
    int Drachmes,reste;
    printf("Entre valeur entire Oboles : ");
    scanf("%d",&Oboles);
    Convertion(Oboles,&Drachmes,&reste);
    printf("Entre valeur de Drachmes %d et le reste est %d \n",Drachmes,reste);
}

int NbAlea(int Min,int Max)
{
    time_t t;
    int nbAlea,nbEntre,nbtentative = 0;
    srand((unsigned) time(&t));
    nbAlea=rand()%(Max+1)+Min; 
    do
    {
        printf("Entre une valeur : ");
        scanf("%d",&nbEntre);
        if(nbAlea > nbEntre)
        {
            printf("Plus grand \n");
        }
        else if (nbAlea < nbEntre) printf("Plus petit \n");
        nbtentative++;
    } while (nbAlea != nbEntre);
    return nbtentative;
}

void Exo2()
{
    int Min,Max,rejouer = -1,meilleur = 0,tentative;
    printf("Donne la valeur mini et maximal pour le jeu du juste nombre \n");
    printf("Valeur Min : ");
    scanf("%d",&Min);
    printf("Valeur Max : ");
    scanf("%d",&Max);
    do
    {
    tentative = NbAlea(Min,Max);
    printf("tu as reussi a touve le nombre en %d tentative\n", tentative);
    if(tentative < meilleur || rejouer == -1)
    {
        meilleur = tentative;
    }
    printf("Meuilleur score %d\n",meilleur);
    printf("Voulez-vous rejour ? (1 : Oui / 0 : Non)\n");
    scanf("%d",&rejouer);
    }while (rejouer == 1);
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
