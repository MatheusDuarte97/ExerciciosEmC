#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

	



int main() {
	setlocale(LC_ALL,"");
	int tam=4;
	int a[tam];
	int i,j=tam;
	
	for(i=0;i<tam;i++) {
		scanf("%d", &a[i]);
	}
	
	for(i=tam-1;i>=0;i--) {
		printf("\n%d\n", a[i]);
	}
	
	return 0;
	

}



