#include<stdio.h>

int main(void) {
    int size;

    printf("enter the number of elements in the array:\n");
    scanf("%d", &size);

    int i, originalArray[size], reversedArray[size], j = 0;

    for (i = 0; i < size; i++) {
        printf("enter the %dth array value:\n", i);
        scanf("%d", &originalArray[i]);
    }

    printf("original array:\n");
    for (i = 0; i < size; i++) {
        printf("[%d] = %d\n", i, originalArray[i]);
    }

    printf("reversed array:\n");
    for (i = (size - 1); i >= 0; i--) {
        reversedArray[j] = originalArray[i];
        printf("[%d] = %d\n", j, reversedArray[j]);
        j++;
    }

    return 0;
}

