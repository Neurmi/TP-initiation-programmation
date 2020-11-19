#ifndef FONCTIONSRECTANGLES_H
#define FONCTIONSRECTANGLES_H


/* Prototype de la fonction geometrieRectangle telle que:
    Calcule le perimetre et la surface d'un rectangle défini par sa longueur et largeur
    Entrées:
    - longueur  : longueur du rectangle
    - largeur   : largeur du rectangle
    - surface   : surface du rectangle (! adresse)
    - perimetre : perimetre du rectangle (! adresse)
*/

void CalculRectangle(float longeur,float largeur,float* surface,float* perimetre);

/* Prototype de la fonction rectanglePlusGrandQue telle que:
    Compare le rectangle A au rectangle B selon leur surface (ou leur perimetre à surface égale)
    Entrées:
    - longueurA  : longueur du rectangle A
    - largeurA   : largeur du rectangle A
    - longueurB  : longueur du rectangle B
    - largeurB   : largeur du rectangle B
    Sortie:
    - si A>B : 1, sinon 0
*/

int ComparaisonRectangle(float longeur,float largeur,float longeur2,float largeur2);

/* Prototype de la fonction permute telle que:
    Permute la valeur de deux réels
    Entrées:
    - x : réel à permuter avec y (! adresse)
    - y : réel à permuter avec x (! adresse)
*/

void InvertionComplexe(float *reel,float *complexe);

/* Prototype de la fonction triRectangles telle que:
    Trie les N longueurs et largeurs caractérisant N rectangles selon l'ordre croissant de la taille des rectangles
    Entrées:
    - longueurs : tableau des longueurs (! adresse)
    - largeurs  : tableau des largeurs (! adresse)
    - N         : nombre de rectangles
*/

void Tri(float *longeur, float *largeur, int *indice, int n);

void Invertion(int *reel,int *complexe);

#endif
