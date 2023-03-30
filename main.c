

#include <stdio.h>
int main () {
	printf ("Test v10.03: OK\n");
	int a = 12;
	int b = 16;
	printf ("a = %d\n", a);
	printf ("b = %d\n", b);
	printf ("NOD (%d, %d) = ", a, b);
	while (a!=b) {
		if (a>b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	printf ("NOD (%d)", a);
	return 0;
}
