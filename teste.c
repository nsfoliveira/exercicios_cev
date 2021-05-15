#include <stdio.h>

int main () {
	
	int n, i, j;
	
	printf ("Quantas a ordem da matriz? ");
	scanf ("%d", &n);
	
	int mat[n][n];
	
	for (i = 0; i < n; i++){
		for (j = 0; j < 3; j++){
			printf ("Elemento [%d,%d]: ", i, j);
			scanf ("%d", &mat[i][j]);
		}
	}
	printf ("\nDiagonal principal: \n");
	for (i = 0; i < n; i++){
		printf ("%d ", mat[i][i]);
	}
	
	return 0;
}