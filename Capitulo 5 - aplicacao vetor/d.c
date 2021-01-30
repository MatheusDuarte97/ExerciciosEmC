#include<stdio.h>
#include <math.h>


int main() {
	int tam = 12;
	int a[tam];
	int b[tam];
	int i,j,totTam=0,aux;
	
	
	for(i=0;i<tam;i++) {
		scanf("%d", &a[i]);	

	}
	
	for (i=0;i<tam;i++) {
		for(j=i+1;j<tam;j++) {
			
			if (a[i] > a[j]) {
				
				aux = a[j];
				a[j] = a[i];
				a[i] = aux;
			}
			
		}
			
	}
	
	for(i=0;i<tam;i++) {
		scanf("%d", &b[i]);	
	}	
	
	for (i=0;i<tam;i++) {
		for(j=i+1;j<tam;j++) {
			
			if (b[i] > b[j]) {
				
				aux = b[j];
				b[j] = b[i];
				b[i] = aux;
			}
			
		}
		
	}	
	
	int c[tam];
	
	for (i=0;i<tam;i++) {
		c[i] = a[i] + b[i];
	}
	
	for(i=0;i<tam;i++) {
		for(j=i+1;j<tam;j++) {
			
			if (c[i] < c[j]);
			aux = c[j];
			c[j] = c[i];
			c[i] = aux;
		}
	}
	
	for(i=0;i<tam;i++) {
		
		printf("%d ", c[i]);
	}
	
	return 0;
}
