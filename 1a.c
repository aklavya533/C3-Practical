//Using static/ dynamic arary sort in ascending or descending order
//Ascending order
#include<stdio.h>
int main() {
    int a[]={ 12, 3, 34, 6, 16}, i,j,t;
    for (i = 0; i<5 ; i++) {
        for (j = i + 1; j<5 ; j++) {
            if (a[i]>a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for ( i = 0; i < 5 ; i++)
    printf("%d\n",a[i]);
}
