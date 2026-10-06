int summa(int a, int b, int n) {
    return (100 - (b * n)) % 100;
}

int get_apples(int n, int k) {
    if (n <= 0) {
        return k;
    }
    return k % n;
}

int kilometers(long long meters) {
    long long km = meters / 1000;
    return km;
}