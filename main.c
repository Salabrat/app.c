
#include <stdio.h>
int factorial (int n);
int main () {
	printf ("Test v10.04: OK\n");
	int n = 6;
	int a;
	a = factorial(n);
	printf ("%d! = %d", n, a);
	return 0;
}

int factorial (int n) {
	if (n <= 0) {
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}
