#include<stdio.h>
#include<math.h>

int main() {
	
	float a,b,c,d=0,r1=0,r2=0;
	
	scanf("%f %f %f", &a, &b, &c);
	d = pow(b,2) - 4 * a * c;
	
	if (a == 0) {
		printf("Nao existe equacao");
	} else if ( d < 0) {
		printf("Nao existe raiz real");
	} else if (d > 0) {
		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		printf("Raiz 1: %.2f\n", r1);
		printf("Raiz 2: %.2f\n", r2);
	} else if (d == 0) {
		r1 = -b/(2*a);
		printf("Raiz 1: %.2f\n", r1);
	}
	
	
	return 0;
	
}
