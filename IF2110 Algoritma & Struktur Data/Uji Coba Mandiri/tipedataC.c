#include <stdio.h>

int main(){
    int usia = 19;
    float berat = 65.3;
    double tinggi = 178.43;
    char jenis_kelamin = 'L';

    printf("Usia: %d tahun\n", usia);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Berat: %.1f Kg\n", berat);
    printf("Jenis kelamin: %c\n", jenis_kelamin);

    return 0;
}