#include "my_crd_h.h"

void init_tab(crd_test *l, int dep, int taille)
{
	int i = dep;
	while(i < taille){
		l[i].v = false;
		i++;
	}
}
