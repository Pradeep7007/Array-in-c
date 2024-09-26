#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 6, 3, 7, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    printf("after removing duplicates:\n");
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
