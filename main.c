
#include <stdio.h>
/*
void readingData () {
	printf ("Reading data OK...\n");
}
void calcData () {
	printf ("Calc. data OK...\n");
}
void writeData () {
	printf ("Write data OK...\n");
}
*/
int readingData ();
int calcData ();
int writeData ();
int main () {
	printf ("Test v10.01: OK\n");
	readingData ();
	calcData ();
	writeData ();  
	return 0;
}	

	int readingData () {
		printf ("Read Data OK...\n");
		return 0;
	}
	int calcData () {
		printf ("Calc Data OK...\n");
	}
	int writeData () {
		printf ("Write Data OK...\n");
	}
