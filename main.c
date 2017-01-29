#include <stdio.h>
#include <stdlib.h>
#include "heap-sort.h"
#include "array.h"

int main() {
    int array[10] = {8, 4, 3, 2, 1, 0, 7, 9, 5, 6};

    print_array(array, 10);
    heap_sort(array, 10);
    print_array(array, 10);

    return 0;
}
