//Задача 1. Создайте прототип программы с помощью 3-х //функций-заглушек. 

#include <stdio.h>
void readingData () {
	printf ("Reading data OK...\n");
}
void calcData () {
	printf ("Calc. data OK...\n");
}
void writeData () {
	printf ("Write data OK...\n");
}
int main () {
	printf ("Test v10.01: OK\n");
	readingData ();
	calcData ();
	writeData ();
	return 0;
}
