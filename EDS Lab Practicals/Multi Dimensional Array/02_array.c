// 2. Program to find the sum, smallest and largest element of a 2 × 3 array

#include <stdio.h>

int main() {
    int a[2][3];
    int i, j, sum = 0, largest, smallest;

    printf("Enter 6 elements:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    largest = a[0][0];
    smallest = a[0][0];

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            sum = sum + a[i][j];

            if(a[i][j] > largest) {
                largest = a[i][j];
            }

            if(a[i][j] < smallest) {
                smallest = a[i][j];
            }


        }
    }

    printf("Sum = %d\n", sum);
    printf("Largest = %d\n", largest);
    printf("smallest = %d\n", smallest);

    return 0;
}