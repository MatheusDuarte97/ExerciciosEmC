#include<stdio.h>
#include<math.h>

int main() {
	
 	char nome[30];
 	char sexo;
 	
 	scanf("%c", &sexo);
 	
 	scanf("%s", nome);
 	
 	switch(sexo) {
 		case 'm':
 			printf("Ilmo. Sr. %s", nome);
 			break;
 		case 'f':
		 	printf("Ilma. Sra. %s", nome);
		 	break;
		default:
			printf("Codigo invalido");
			break;	 	
	 }
 	
 	
	return 0;
	
}
