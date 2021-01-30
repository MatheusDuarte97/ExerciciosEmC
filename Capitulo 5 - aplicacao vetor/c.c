#include<stdio.h>
#include <math.h>


int main() {
	int tam=3;
	int a[] = {5,2,3};
	int b[tam];
	int i,j,fat=1,aux;
	
	
	
	for(i=0;i<tam;i++) {
	
		for(j=1;j<=a[i];j++) {
			fat = fat * j;
			b[i] = fat;
			
		}
		fat = 1;
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
	
	for (i=0;i<tam;i++) {
		printf("%d\n", b[i]);
	}
	
	return 0;
}
