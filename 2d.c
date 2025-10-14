//Quick sort
#include <stdio.h>
void quickSort(int array[], int , int );
int main() {
    int list [50], size, i, j;
    printf("Enter number of elements:\n ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        return 1;
    }
    printf("Enter elements to be sorted:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &list[i]);
    }
    quickSort(list, 0, size - 1);
    printf("After applying quick sort:\n");
    for (j = 0; j < size; j++) {
        printf("%d ", list[j]);
    }
    printf("\n");
    return 0;
}

void quickSort(int list[], int low, int high) {
    int pivot, i, j, temp;
    if (low < high) {
        /* Use Lomuto partition: pivot is last element */
        pivot = list[high];
        i = low - 1;
        for (j = low; j <= high - 1; j++) {
            if (list[j] <= pivot) {
                i++;
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        /* Place pivot after the last smaller element */
        temp = list[i + 1];
        list[i + 1] = list[high];
        list[high] = temp;
        /* Recursively sort partitions */
        quickSort(list, low, i);
        quickSort(list, i + 2, high);
    }
}