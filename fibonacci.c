#include "fibonacci.h"

int fibonacci(int n) {
    if (n < 2) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int fibonacci_tail(int n, int a, int b) {
    if (n == 1) {
        return b;
    } else {
        return fibonacci_tail(n - 1, b, a + b);
    }
}

int fibonacci_iterative(int n) {
    int i, j, k, t;
    i = 1;
    j = 0;
    for (k = 1; k <= n; k++) {
        t = i + j;
        i = j;
        j = t;
    }
    return j;
}