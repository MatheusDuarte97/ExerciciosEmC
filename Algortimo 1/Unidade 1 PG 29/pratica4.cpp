#include<stdio.h>


int main() {
	
	int a,b,c;
	
	a = 5;
	b = 30;
	
	c = a;
	a = b;
	b = c;
	
	
	printf(" A: %d\n", a);
	printf(" B: %d\n", b);
	printf(" C: %d\n", c);
}
