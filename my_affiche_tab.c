#include "my_crd_h.h"

void affiche_tab(crd_test *l, int taille)
{
	int i = 0;
	while(i < taille){
		printf("indice : %d ____ %lld ---> %u:%s\n", i, l[i].valeur, l[i].v,l[i].v ? "true":"false");
		i++;
	}	
}
