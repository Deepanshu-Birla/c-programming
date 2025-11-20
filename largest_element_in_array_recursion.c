#include <stdio.h>

int largest(int a[], int n) {
    if (n == 1)
        return a[0];

    int max = largest(a, n-1);
    return (max > a[n-1]) ? max : a[n-1];
}

int main() {
    int a[] = {5, 7, 2, 9, 1};
    int n = 5;
    printf("Largest = %d", largest(a, n));
    return 0;
}
