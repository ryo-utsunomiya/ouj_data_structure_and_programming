#include <stdio.h>
#include "array.h"

void print_array(int v[], int n) {
    int i;
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}
