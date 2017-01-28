#include "merge-sort.h"

void merge_sort(int v[], int lb, int ub, int v_temp[]) {
    int i, j, k, c;

    if (lb >= ub) {
        return;
    }

    c = (lb + ub) / 2;

    merge_sort(v, lb, c, v_temp);
    merge_sort(v, c + 1, ub, v_temp);

    for (i = lb; i <= c; i++) {
        v_temp[i] = v[i];
    }
    for (i = c + 1, j = ub; i <= ub; i++, j--) {
        v_temp[i] = v[j];
    }

    i = lb;
    j = ub;

    for (k = lb; k <= ub; k++) {
        if (v_temp[i] <= v_temp[j]) {
            v[k] = v_temp[i++];
        } else {
            v[k] = v_temp[j--];
        }
    }
}