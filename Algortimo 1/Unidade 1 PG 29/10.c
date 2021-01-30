#include<stdio.h>
#include<locale.h>
#include<math.h>
int main() {
	
	setlocale(LC_ALL, "");
	float a, raiz, pot;
	
	printf("Insira um numero: ");
	scanf("%f", &a);
	
	raiz = sqrt(a);
	pot = pow(a, 2);
	
	printf("Raiz: %f\n", raiz);
	printf("Potencia: %.2f\n", pot);
}
