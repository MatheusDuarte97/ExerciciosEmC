#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
	setlocale(LC_ALL, "");
	int resultado,a,b,c,soma;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	resultado = a + b + c;
	soma = pow(resultado,2); 
	
	printf("%d", soma);
	
}
