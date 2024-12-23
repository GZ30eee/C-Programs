#include <stdio.h>
#include <stdlib.h>

void* custom_malloc(size_t size) {
    void* ptr = malloc(size);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    return ptr;
}

void custom_free(void* ptr) {
    free(ptr);
}

int main() {
    int* arr = (int*) custom_malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    custom_free(arr);
    return 0;
}
