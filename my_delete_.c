#include "my_crd_h.h"

void my_delete(crd_test *l, int *taille)
{
	int i = *taille - 2;
	while(i > -1){
		if(i == 0 || l[i].v == true)
			break;
		i--;
	}
	my_realloc(&l, taille, i);
}
