#include<stdio.h>
#include <math.h>



struct pessoa {
	
	char nome[3];
	
};


struct bin {
	
	int num[3];
	
};

int main() {
	
	int tam=3;
	struct pessoa ord[tam];
	struct bin conv[tam];
	unsigned int car[3];
		//	char letras[tamL] = {'a','b','c','d'}//,'e','f','g','h','i','j','k','l'
					//	,'m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i;
	int j;

	
	for(i=0;i<tam;i++) {
			scanf("%s", ord[i].nome);
			fflush(stdin);				
	}
	
	



	
	
	return 0;
}
