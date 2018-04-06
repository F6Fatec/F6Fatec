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
	int *pm;
	//int mr= rand() % 4;
	//int mc= rand() % 6;
	pm= &m[0][0];
	for (int i= 0; i< 4; i++) {
		for (int j= 0; j< 6; j++) {
			pm= &m[i][j];
			printf("%d\t", *pm);
		}
		printf("\n");
	}
	//printf("%d\n", *pm);

}

void main(void) {
	createMatrix();
	printMatrix();
	pointerMatrix();
}