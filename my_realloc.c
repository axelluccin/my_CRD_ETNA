#include "my_crd_h.h"

void my_realloc(crd_test **l, int *taille, int cle)
{
	void *tmp = realloc(*l, (cle + 1) * sizeof(crd_test));
	if(tmp == NULL)
		exit(EXIT_FAILURE);
	*l = tmp;
	if(*taille < cle)
		init_tab(*l, *taille, (cle + 1));
	
	*taille = cle + 1;
}
