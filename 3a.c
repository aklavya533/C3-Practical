// Searching for an element in an array using linear search 
#include <stdio.h>
int main() {
    int a[20], i , x ,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be searched:\n");
    scanf("%d",&x);
    for(i=0;i<n;i++) {
        if(a[i]==x) {
            printf("Element found at position: %d\n",i);
            break;
        }
        if (i == n)
        printf("Element not found\n");
        return 0;
    }
}