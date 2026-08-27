#include <stdio.h>
#include <stdlib.h> // Required for qsort and bsearch

// 1. The comparison function (Used by BOTH qsort and bsearch)
int comparefunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int values[] = {44, 4, 45, 5, 4};
    int n = 5;

    // 2. Sort the array FIRST! (Crucial for bsearch to work)
    qsort(values, n, sizeof(int), comparefunc);
    
    // 3. Define what we want to search for
    int key = 45; 

    // 4. Use bsearch to find the key
    // We cast the result to (int*) because bsearch returns a generic (void*)
    int *result = (int*) bsearch(&key, values, n, sizeof(int), comparefunc);

    // 5. Check if the result is NULL
    if (result != NULL) {
        // Dereference the pointer to print the value
        printf("Success! Found the number: %p\n", &result);
    } else {
        printf("The number %d is NOT in the array.\n", key);
    }

    return 0;
}