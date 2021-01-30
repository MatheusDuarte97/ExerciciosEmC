#include<stdio.h>
#include<locale.h>


int main() {
	
	int a,b,c,d,dist;
	
	printf("Valor de A: ");
	scanf("%d", &a);
	printf("Valor de B: ");
	scanf("%d", &b);
	printf("Valor de C: ");
	scanf("%d", &c);
	printf("Valor de D: ");
	scanf("%d", &d);
	
	dist = ((a*b) + (a*c) + (a*d) + (b*c) + (b*d) + (c*d));
	printf("%d", dist);
	return 0;	
}


