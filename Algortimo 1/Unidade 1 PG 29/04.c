#include<stdio.h>
#include<locale.h>

int main() {
	int i;
	
	scanf("%d", &i);
	
	printf("Sucessor: %d\n", i + 1);
	printf("Numero: %d\n", i);
	printf("Antecessor: %d\n", i - 1);	
	return 0;
}

