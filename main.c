#include "my_crd_h.h"

int main()
{
	char str[50];
	char *s;
	int t;
	int taille = 0;
	crd_test *liste = NULL;
	
	
	while (1){
		if (fgets(str, sizeof(str), stdin) == NULL)
			break;
		t = strlen(str);
		str[t - 1] = '\0';
		if ((s = strchr(str, ' ')) != NULL){
			s[0] = '\0';
			int my_cle = atoi((const char*)str);
			if (strcmp(&s[1], "D") == 0){	
				if(taille > (my_cle + 1))
					printf("%lld\n", delete_(liste, my_cle));
				else if(taille == (my_cle + 1)){		
					printf("%lld\n", delete_(liste, my_cle));
					my_delete(liste, &taille);
				}
				else
					printf("-1\n");
			}
			else{				
				if(taille <= my_cle)			
					my_realloc(&liste, &taille, my_cle);
				printf("%d\n", ajout(liste, my_cle, atoll((const char*)&s[1])));
			}
		}
		else
			printf("%lld\n",recherche(liste, taille, atoi(str)));
		

	}
	return 0;	
}
