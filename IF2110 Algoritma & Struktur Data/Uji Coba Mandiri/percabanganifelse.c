#include <stdio.h>

/* int HasilAkhir(void){
    int nilaiUAS;  // Ubah array ke variabel tunggal karena hanya membaca satu nilai
    printf("Masukkan nilai UAS Alstrukdatmu Bung : ");
    scanf("%d", &nilaiUAS);  // Tambahkan & untuk membaca nilai integer

    if (nilaiUAS >= 0 && nilaiUAS <= 30){
        printf("Maaf, bung diharuskan mengikuti ujian mengulang karena indeks E\n");
    }
    else if (nilaiUAS > 30 && nilaiUAS <= 40){
        printf("Indeks bung D\n");
    }
    else if (nilaiUAS > 40 && nilaiUAS <= 50){
        printf("Indeks bung C\n");
    }
    else if (nilaiUAS > 50 && nilaiUAS <= 70){
        printf("Indeks bung B\n");
    }
    else if (nilaiUAS > 70 && nilaiUAS <= 100){
        printf("Indeks bung A\n");
        for (int i = 0; i < 10; i++){
            printf("Selamat, indeks bung adalah yang terkuat!\n");
        }
    }
    else {
        printf("Nilai tidak valid, Silahkan ulangi!\n");
    }

    return 0;
} */

/*#include <stdio.h>

int HasilAkhir(void){
    int nilaiUAS;
    printf("Masukkan nilai UAS Alstrukdatmu Bung : ");
    scanf("%d", &nilaiUAS);
    switch (nilaiUAS) {
        case 0 ... 30: 
            printf("Maaf, bung diharuskan mengikuti ujian mengulang karena indeks E\n");
            break;
        case 31 ... 40: 
            printf("Indeks bung D\n");
            break;
        case 41 ... 50:
            printf("Indeks bung C\n");
            break;
        case 51 ... 70:
            printf("Indeks bung B\n");
            break;
        case 71 ... 100:
            printf("Indeks bung A\n");
            for (int i = 0; i < 10; i++) {
                printf("Selamat, indeks bung adalah yang terkuat!\n");
            }
            break;
        default:
            printf("Nilai tidak valid, Silahkan ulangi!\n");
            break;
    }

    return 0;
}

int main() {
    HasilAkhir();
    return 0;
}
*/

enum Hari {Senin = 1, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu};
eventHari(enum Hari hari) {
    switch (hari) {
        case Senin:
            printf("Hari Senin: Sokin FIFA\n");
            break;
        case Selasa:
            printf("Hari Selasa: Sokin ML\n");
            break;
        case Rabu:
            printf("Hari Rabu: Chaos\n");
            break;
        case Kamis:
            printf("Hari Kamis: Dibantai praktikum\n");
            break;
        case Jumat:
            printf("Hari Jumat: Jumat Shaleh\n");
            break;
        case Sabtu:
            printf("Hari Sabtu: Date\n");
            break;
        case Minggu:
            printf("Hari Minggu: Turu\n");
            break;
        default:
            printf("Hari tidak valid!\n");
            break;
    }
}

int main() {
    int inputHari;
    printf("Pilih hari (1 untuk Senin, 2 untuk Selasa, dst): ");
    scanf("%d", &inputHari);

    if (inputHari >= Senin && inputHari <= Minggu) {
        eventHari(inputHari);
    } else {
        printf("Hari tidak valid, silakan pilih antara 1 hingga 7.\n");
    }

    return 0;
}