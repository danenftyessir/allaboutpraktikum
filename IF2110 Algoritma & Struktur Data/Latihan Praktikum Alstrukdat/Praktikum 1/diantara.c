#include <stdio.h>

int main() {
    long L;
    long R;
    long D;
    scanf("%ld %ld %ld", &L, &R, &D);
    long count = 0;
    long i;
    for (i = L; i <= R; i++) {
        if (i % D == 0) {
            count++;
        }
    }
    printf("%ld\n", count);
    return 0;
}