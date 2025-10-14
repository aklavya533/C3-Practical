//Bubble sort
#include<stdio.h>
int main() {
    int a[5]={ 12, 3, 34, 6, 16}, i,j,t;
    for (i = 0; i<5 ; i++) {
        for (j = i ; j<5 ; j++) {
            if (a[j]>a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j +1 ] = t;
            }
        }
    }
    for ( j = 0; j < 5 ; j++)
    printf("%d\n",a[j]);
}