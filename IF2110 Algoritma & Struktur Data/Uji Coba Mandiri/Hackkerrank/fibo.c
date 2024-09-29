#include <stdio.h>
int f(int n, int a, int b) {
    if (n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    } else {
        return f(n - 1, a, b) + f(n - 2, a, b);
    }
}

int main() {
    int n, a, b;
    printf("");
    scanf("%d %d %d", &n, &a, &b);
    int hasil = f(n, a, b);
    printf("%d\n", hasil);
    return 0;
}
