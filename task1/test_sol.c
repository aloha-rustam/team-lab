#include <assert.h>
#include <stdio.h>

int summa(int a, int b, int n);

int main() {
    assert(summa(5, 20, 5) == 0);
    assert(summa(2, 0, 5) == 0);
    assert(summa(0, 20, 3) == 40);

    printf("Все тесты пройдены!\n");
    return 0;
}