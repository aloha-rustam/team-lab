#include <stdio.h>

int get_apples(int n, int k) {
    if (n <= 0) {
        return k;
    }
    return k % n;
}