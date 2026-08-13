#include <stdio.h>

int main() {
    int a[5], i, p = 0, n = 0, z = 0;

    printf("Enter 5 elements: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            p++;
        else if (a[i] < 0)
            n++;
        else
            z++;
    }

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", n);
    printf("Zero = %d\n", z);

    return 0;
}