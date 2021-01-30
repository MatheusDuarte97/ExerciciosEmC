#include<stdio.h>
#include<math.h>

int main() {
	
	int a,b,c,d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if ((a % 2 == 0) && (a % 3 == 0)) {
		printf("%d\n", a);
	}
	
	if ((b % 2 == 0) && (b % 3 == 0)) {
		printf("%d\n", b);
	}

	if ((c % 2 == 0) && (c % 3 == 0)) {
		printf("%d\n", c);
	}
	
	if ((d % 2 == 0) && (d % 3 == 0)) {
		printf("%d\n", d);
	}
	
	return 0;
	
}
