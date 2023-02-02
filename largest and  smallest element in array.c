#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int smallest = a[0];
    int largest = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}

