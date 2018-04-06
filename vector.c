#include <stdio.h>
#include <time.h>

int v[10];

void createVector(void) {
	srand(time(NULL));
	for (int i= 0; i< 10; i++) {
		v[i]= (rand() % 21);
	}
}

void printVector(void) {
	for (int i= 0; i< 10; i++) {
		printf("%d ", *v + i);
	}
	printf("\n");
}

void main(void) {
	createVector();
	printVector();
}