#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main() {
    int array[10] = {8, 4, 3, 2, 1, 0, 7, 9, 5, 6};

    print_array(array, 10);
    quicksort(array, 0, 9);
    print_array(array, 10);

    return 0;
}
