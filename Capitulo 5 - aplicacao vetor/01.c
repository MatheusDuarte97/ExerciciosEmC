#include<stdio.h>
#include <math.h>


int main() {
	

	
	int tam=12;
	int j;
	int a[tam];
	int aux;
	int i;
	for(i=0;i<tam;i++) {
		scanf("%d", &a[i]);
		
	}
	
	for(i=0;i<tam;i++) {
		for(j=i+1;j<tam;j++) {
			
			if (a[i] > a[j]) {
				
				aux = a[j];
				
				a[j] = a[i];
				
				a[i] = aux;
			}
			
		}
	}


	for(i=0;i<tam;i++) {
		
		printf("%d ", a[i]);
	}
	
	
	return 0;
}
