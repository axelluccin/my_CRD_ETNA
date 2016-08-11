#include "my_crd_h.h"

long long delete_(crd_test *l, int cle)
{
	if(!l[cle].v)
		return -1;
	else
		l[cle].v = false;
	return l[cle].valeur;
}
