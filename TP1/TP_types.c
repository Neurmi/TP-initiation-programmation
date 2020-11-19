/*--- ELEMENTS DE LANGAGE A CONNAITRE ---*/
/*
 .h et #include
 printf, scanf
 opérateur de cast
*/

/*--- COMMANDES DU TERMINAL ---*/
/* ! Les options de compilation de gcc sont volontairement omises pour ce TP */
/*
 gcc TP_types.c -o exeTypes
 ./exeTypes
*/


/* Inclure les fichiers header nécessaires */

int main(void){
    
    /* Bloc de code 1 */
    {
        /* Afficher à l'écran la chaine de caractère coucou avec un saut de ligne */
    }
    
    /* Bloc de code 2 */
    {
        /* Déclarer sans les initialiser les variables a et b de types respectifs int et float */

        /* Afficher à l'écran le contenu des variables a et b */
        
        /* Affecter la valeur 3 à la variable a et la valeur 6.14 à la variable b */
        
        /* Afficher à l'écran le contenu des variables a et b */
    }
    
    /* Bloc de code 3 */
    {
        /* Déclarer sans les initialiser trois variables x, y et z de type int */
        
        /* Affecter la valeur 60000 aux variables x et y */
        
        /* Affecter à la variable z le produit de x par y */
        
        /* Afficher à l'écran le contenu des variables x, y et z
           EXPLIQUER L'AFFICHAGE */
    }
    
    /* Bloc de code 4 */
    {
        /* Déclarer sans les initialiser deux variables x, y de type int, et une variable z de type float */
        
        /* Affecter la valeur 60000 aux variables x et y */
        
        /* Affecter à la variable z le produit de x par y */
        
        /* Afficher à l'écran le contenu des variables x, y et z
         EXPLIQUER L'AFFICHAGE */
        
        /* Utiliser l'opérateur de cast pour résoudre le problème ... */
    }
    
    /* Bloc de code 5 */
    {
        /* Déclarer sans les initialiser deux variables x, y de type int, et une variable z de type float */
        
        /* Affecter la valeur 2 à la variable x, et la valeur 9 à la variable y */
        
        /* Affecter à la variable z le quotient de x par y */
        
        /* Afficher à l'écran le contenu des variables x, y et z
           EXPLIQUER L'AFFICHAGE */
        
        /* Utiliser l'opérateur de cast pour résoudre le problème ... */
    }
    
    /* Bloc de code 6 */
    {
        /* Déclarer la variable x de type float et l'initialiser à 0.1
           Déclarer la variable y de type double et l'initialiser à 0.1 */
        
        /* Afficher à l'écran le contenu des variables x et y */
        
        /* Afficher à l'écran le contenu des variables x et y avec 20 chiffres après la virgule
           EXPLIQUER L'AFFICHAGE */
    }
    
    /* Bloc de code 7 */
    {
        /* Déclarer deux variables x et y de type float et les initialiser respectivement à 49384877246575 et 49384877246576 */
        
        /* Afficher à l'écran la valeur de y-x
           EXPLIQUER L'AFFICHAGE */
    }
    
    /* Bloc de code 8 */
    {
    /*
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
    */
    }
    
    /* Bloc de code 9 */
    {
    /*
        int u;
        float v;
        printf("Donnez un entier : ");
        scanf("%d",&u);
        printf("Donnez un reel : ");
        scanf("%f",&v);
        printf("%d , %f\n",u,v);
     */
    }

    return 0;
}
