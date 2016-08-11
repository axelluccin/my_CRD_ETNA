#ifndef	__MY_CRD_H__
#define __MY_CRD_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

//Structure
typedef struct crd_test crd_test;
struct crd_test
{
	long long int valeur;
	bool v ;
};


//function
void init_tab(crd_test *l, int dep,int taille);
void affiche_tab(crd_test *l, int taille);
int ajout(crd_test *l, int cle, long long valeur);
long long delete_(crd_test *l, int cle);
long long recherche(crd_test *l,int taille, int cle);
void my_realloc(crd_test **l, int *taille, int cle);
void my_delete(crd_test *l, int *taille);

#endif



