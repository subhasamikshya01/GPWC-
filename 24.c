#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of values to be entered: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));  // Dynamically allocate memory

    printf("Enter numbers: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);  // Free the dynamically allocated memory
    return 0;
}

