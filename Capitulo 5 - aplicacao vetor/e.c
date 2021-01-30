#include<stdio.h>
#include <math.h>


int main() {
	int tam=30;
	int tamL=20;
	int a[tamL], b[tam];
	int total;
	int i;
	
	total = tam + tamL;
	
	for(i=0;i<tamL;i++) {
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<tam;i++) {
		scanf("%d", &b[i]);
	}
	
	int c[total];
	int j=0;
	for(i=0;i<=total/2;i++) {
		
		if (i < total/2) {
			c[i] = a[i];
		} else {
			while(i < total) {
				c[i] = b[j];
				j++;
				i++;
			}
		}
	}
	
	j=0;
	int aux;
	for(i=0;i<total;i++) {
		for(j=i+1;j<total;j++) {
			if (c[i] < c[j]) {
				aux = c[j];
				c[j] = c[i];
				c[i] = aux;
			} 
		}
	}
	
	for(i=0;i<total;i++) {
		printf("Elemento %d Posicao %d\n", c[i],i);
	}
	
	return 0;
}
