#ifndef FONCTIONSTESTRECTANGLES_H
#define FONCTIONSTESTRECTANGLES_H

/* Prototype de la fonction test_rectanglePlusGrandQue telle que:
    Réalise le test de la fonction : int rectanglePlusGrandQue(float longueurA, float largeurA,float longueurB, float largeurB)
    en utilisant des valeurs de test prédéfinies
    Sortie:
    - si toutes les valeurs de test sont validées : 1, sinon 0 avec affichage d'un message indiquant le numéro du premier test en échec
*/

int rectanglePlusGrandQueTest();

/* Prototype de la fonction test_triRectangles telle que:
    Réalise le test de la fonction : void triRectangles( float* longueurs, float* largeurs, int N)
    en utilisant des valeurs de test prédéfinies
    Sortie:
    - si toutes les valeurs de test sont validées : 1, sinon 0 avec affichage d'un message indiquant le numéro du premier test en échec
 */

int rectangleTriTest();

/* Prototype de la fonction test_rectanglePlusGrandQue_fichier telle que:
    Réalise le test de la fonction : int rectanglePlusGrandQue(float longueurA, float largeurA,float longueurB, float largeurB)
    en utilisant des valeurs de test chargées depuis un fichier
    Entrée:
    - filename : chemin et nom du fichier contenant les valeurs de test
    Sortie:
    - si toutes les valeurs de test sont validées : 1, sinon 0 avec affichage d'un message indiquant le numéro du premier test en échec
 */

int rectanglePlusGrandQueTestavecFichier();

/* Prototype de la fonction test_triRectangles_fichier telle que:
    Réalise le test de la fonction : void triRectangles( float* longueurs, float* largeurs, int N)
    en utilisant des valeurs de test chargées depuis un fichier
    Entrée:
    - filename : chemin et nom du fichier contenant les valeurs de test
    Sortie:
    - si toutes les valeurs de test sont validées : 1, sinon 0 avec affichage d'un message indiquant le numéro du premier test en échec
 */

int rectangleTriTestavecFichier();

#endif
