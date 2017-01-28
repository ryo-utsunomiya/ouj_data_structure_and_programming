#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main() {
    int i;
    for (i = 1; i < 20; i++) {
        printf("\nFibonacci           %d ", fibonacci(i));
        printf("\nFibonacci Tail      %d ", fibonacci_tail(i, 0, 1));
        printf("\nFibonacci Iterative %d ", fibonacci_iterative(i));
        printf("\n");
    }

    return 0;
}
