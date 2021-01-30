#include<stdio.h>
#include <math.h>


int main() {
	
	int a[] = {1,2,3,4,5,6,7,8};
	int busca;

    printf("Busca: ");
    scanf("%d", &busca);

    int meio;
    int ini = 0;
    int tam=8;
    meio = (ini+tam-1)/2;
    int acho = 0;
    while (ini<tam) {
        if (a[meio] == busca) {
            acho = 1;
        } else if (busca > a[meio]) {
            ini = meio + 1;

        } else if (busca < a[meio]) {
            tam = meio - 1;
        }

        meio = (ini+tam-1)/2; 
    }
    if (acho) {
        printf("Encontrado %d posicao %d", a[meio], meio);
    } 

	return 0;
}
