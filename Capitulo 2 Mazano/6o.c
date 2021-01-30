#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	int a,b,c,d,p,s;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	p = a*c;
	s = b*d;
	
	printf("%d\n", p);
	printf("%d", s);
	
	return 0;
}
