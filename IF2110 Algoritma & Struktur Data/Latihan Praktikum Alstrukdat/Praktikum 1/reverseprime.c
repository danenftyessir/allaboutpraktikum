#include <stdio.h>

int Prima(int n) {
    for (int i = 2; i * i <= n; i++) {
        n % i == 0;
    }
    return 0;
}
int main() {
    long num;
    scanf("%ld", &num);
    int hasil = 0;
    int Digit = 0;
    while (num > 0) {
        int digit = num % 10;
        if (Prima(digit)) {
            hasil = hasil * 10 + digit;
            Digit = 1;
        }
        num /= 10;
    }
    if (Digit) {
        printf("%d\n", hasil);
    } else {
        printf("0\n");
    }
    return 0;
}