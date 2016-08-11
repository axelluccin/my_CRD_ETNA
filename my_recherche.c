#include "my_crd_h.h"

long long recherche(crd_test *l,int taille, int cle)
{
	if(taille < cle)
		return -1;
	else if(!l[cle].v)
		return -1;
	else
		return l[cle].valeur;
}
