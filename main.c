#include <stdio.h>
#include <stdlib.h>
#include "merge-sort.h"
#include "array.h"

int main() {
    int array[10] = {8, 4, 3, 2, 1, 0, 7, 9, 5, 6};
    int array_temp[10];

    print_array(array, 10);
    merge_sort(array, 0, 9, array_temp);
    print_array(array, 10);

    return 0;
}
