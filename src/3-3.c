#include <stdio.h>
#include <math.h>

int main() {
	printf("3.3 \n");
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int AT[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            AT[j][i] = A[i][j];
        }
    }

    printf("AT:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", AT[i][j]);
        }
        printf("\n");
    }
	return 0;
}