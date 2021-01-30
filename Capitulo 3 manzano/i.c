#include<stdio.h>
#include<math.h>

int main() {
	
	int a,b,c,d,e,maior=0,menor;
	scanf("%d %d %d %d %d", &a, &b, &c, &d);
	menor = a;
	printf("%d", a);
	if (a > maior) {
		maior = a;
		
		if (b > maior) {
			maior = b;
		}
		
		if(c > maior) {
			maior = c;
			
		}
		
		if (d > maior) {
			maior = d;
			
		}
		
		if (e > maior) {
			maior = e;
		}
	}
	
	if (b < menor) {
		menor = b;	
	}
	
	if (c < menor) {
		menor = c;
	}
	
	if (d < menor) {
		menor = d;
	}
	
	if (e < menor) {
		menor = e;
	}
	
	printf("Maior: %d\n", maior);
	printf("Menor: %d", menor);
	
	return 0;
	
}
