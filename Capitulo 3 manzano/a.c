#include<stdio.h>


int main() {
	
	int a, b, aux;
	scanf("%d %d", &a, &b);
	
	if (a < b) {
		
		aux = a;
		a = b;
		b = aux;
		printf(" A %d\n", a);
		printf(" B %d\n", b);
		printf("%d", a-b);
		
	} else {
		printf("%d", a-b);
	}
	return 0;
	
}
