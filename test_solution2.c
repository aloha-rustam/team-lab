#include <stdio.h>
#include <assert.h>

int get_apples(int n, int k);

int main() {
    assert(get_apples(3, 16) == 1);
    assert(get_apples(2, 10) == 0);
    assert(get_apples(0, 3) == 3);
    assert(get_apples(6, 5) == 5);
    
    printf("задача с яблоками - все ок\n");
    return 0;
}
