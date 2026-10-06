#include <assert.h>
#include <stdio.h>

int summa(int a, int b, int n);

int get_apples(int n, int k);

int kilometers(long long meters);


int main() {
    assert(summa(5, 20, 5) == 0);
    assert(summa(2, 0, 5) == 0);
    assert(summa(0, 20, 3) == 40);

    assert(get_apples(3, 16) == 1);
    assert(get_apples(2, 10) == 0);
    assert(get_apples(0, 3) == 3);
    assert(get_apples(6, 5) == 5);

    assert(kilometers(1500) == 1);
    assert(kilometers(2700) == 2);
    assert(kilometers(14300) == 14);
    
    printf("Все тесты пройдены!\n");
    return 0;
}