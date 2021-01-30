#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

	



int main() {
	setlocale(LC_ALL,"");
	int tam = 5;
	int a[tam][tam];
	int b[tam][tam];
	int i,j;
	
	for(i=0;i<tam;i++) {
		for(j=0;j<tam;j++) {
			scanf("%d", &a[i][j]); 
		}
		
	}
	for(i=0;i<tam;i++) {
		for(j=0;j<tam;j++) {
			scanf("%d", &b[i][j]); 
		}
		
	}
	int c[tam][tam];
	
	for(i=0;i<tam;i++) {
		for(j=0;j<tam;j++) {
			c[i][j] = a[i][j] - b[i][j];
		}
		
	}	
	for(i=0;i<tam;i++) {
		for(j=0;j<tam;j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
		
	
	return 0;
	

}



