#include <stdio.h>
int gcd (int a, int b);
int main () {
	printf ("Test v10.03: OK\n");
	int a = 12;
	int b = 16;
	printf ("a = %d\n", a);
	printf ("b = %d\n", b);
	printf ("NOD (%d, %d) = ", a, b);
	a = gcd(a, b);
	printf ("NOD (%d)", a);
	return 0;
}

int gcd (int a, int b) {
	while (a!=b) {
		if (a>b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}
