#include "my_crd_h.h"

int ajout(crd_test *l, int cle, long long valeur)
{
	l[cle].valeur = (long long int)valeur;
	l[cle].v = true;
	return cle;
}
