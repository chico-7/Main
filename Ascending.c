#include <stdio.h>
#include <conio.h>

void main() {
    int a[5], i, j, temp;
    clrscr();

    // Step 1: Input array elements
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Step 2: Print array before sorting
    printf("Array before sorting:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    // Step 3: Sort the array in ascending order
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Step 4: Print array after sorting
    printf("\nArray after sorting:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    getch();
}
