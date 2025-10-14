//Input sparse matrix and store in 3- tuple scheme. 
#include <stdio.h>
int main() {
    int a[3] [3]= { {0,0,4}, {0,0,0}, {9,0,6} };
    int sm[3] [3];
    int i, j, k=0, m=0;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (a[i][j] != 0) {
                sm[k][m] = i;
                sm[k][m] = j;
                sm[k][++m] = a[i][j];
                k++;
                m=0;
            }
        }
    }
    printf("\nSparse matrix:\n");
    for (i=0; i<k; i++) {
        for (j=0; j<3; j++) {
            printf("%d \t", sm[i][j]);
        }
        printf("\n");
    }
    return 0;
}