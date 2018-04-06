#include <stdio.h>
#include <time.h>

int m[4][6];

void createMatrix(void) {
	srand(time(NULL));
	for (int i= 0; i< 4; i++) {
		for (int j= 0; j< 6; j++) {
			m[i][j] = rand() % 11;
		}
	}
}

void printMatrix(void) {
	for (int i= 0; i< 4; i++) {
		for (int j= 0; j< 6; j++) {
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void pointerMatrix(void) {
	for (int i= 0; i< 4; i++) {
		for (int j= 0; j< 6; j++) {
			printf("%d\t", *(*(matrix + i) + j));
		}
		printf("\n");
	}
	printf("\n");

}

void main(void) {
	createMatrix();
	printMatrix();
	pointerMatrix();
}