#include <stdio.h>
#include "quicksort.h"

int partition(int v[], int lower_bound, int upper_bound) {
    int a, down, up, temp;

    a = v[lower_bound];
    up = upper_bound;
    down = lower_bound;

    while (down < up) {
        while ((v[down] <= a) && (down < upper_bound)) {
            down++;
        }
        while (v[up] > a) {
            up--;
        }
        if (down < up) {
            temp = v[down];
            v[down] = v[up];
            v[up] = temp;
        }
    }

    v[lower_bound] = v[up];
    v[up] = a;

    return up;
}

void quicksort(int v[], int left, int right) {
    int p;
    if (left >= right) return;
    p = partition(v, left, right);
    quicksort(v, left, p - 1);
    quicksort(v, p + 1, right);
}