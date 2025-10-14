//Insertion sort
#include <stdio.h>
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); 
    }
    printf("\n");
}
void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j]; 
            j = j - 1;
        }
        
        array[j + 1] = key;
    }
}
int main() {
    int data[] = {8, 5, 3, 4, 6};
    int size = sizeof(data) / sizeof(data[0]); 
    printf("Original array:\n");
    printArray(data, size);   
    insertionSort(data, size);  
    printf("Sorted array in ascending order:\n");
    printArray(data, size); 
}
