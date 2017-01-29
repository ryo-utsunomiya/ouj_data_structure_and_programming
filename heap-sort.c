#include "heap-sort.h"

void heap_sort_sift_down(int array[], int root_node, int bottom) {
    int node_max, node, temp;

    node_max = (root_node * 2) + 1;
    if (node_max < bottom) {
        node = node_max + 1;
        node_max = (array[node] > array[node_max]) ? node : node_max;
    } else {
        if (node_max > bottom) {
            return;
        }
    }

    if (array[root_node] >= array[node_max]) {
        return;
    }

    temp = array[root_node];
    array[root_node] = array[node_max];
    array[node_max] = temp;

    heap_sort_sift_down(array, node_max, root_node);
}

void heap_sort(int array[], int num) {
    int i, temp;

    for (i = (num / 2); i >= 0; i--) {
        heap_sort_sift_down(array, i, num - 1);
    }

    for (i = num - 1; i >= 1; i--) {
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heap_sort_sift_down(array, 0, i - 1);
    }
}
