#include <stdio.h>

typedef struct {
    int HH; // Hour [0..23]
    int MM; // Minute [0..59]
    int SS; // Second [0..59]
} JAM;

int IsJValid(int H, int M, int S) {
    return (H >= 0 && H <= 23) && (M >= 0 && M <= 59) && (S >= 0 && S <= 59);
}

JAM MakeJam(int HH, int MM, int SS) {
    JAM J;
    if (IsJValid(HH, MM, SS)) {
        J.HH = HH;
        J.MM = MM;
        J.SS = SS;
    } else {
        printf("Jam tidak valid!\n");
    }
    return J;
}

int GetHour(JAM J) {
    return J.HH;
}

int GetMinute(JAM J) {
    return J.MM;
}

int GetSecond(JAM J) {
    return J.SS;
}

void SetHour(JAM *J, int newHH) {
    if (newHH >= 0 && newHH <= 23) {
        J->HH = newHH;
    }
}

void SetMinute(JAM *J, int newMM) {
    if (newMM >= 0 && newMM <= 59) {
        J->MM = newMM;
    }
}

void SetSecond(JAM *J, int newSS) {
    if (newSS >= 0 && newSS <= 59) {
        J->SS = newSS;
    }
}

void BacaJam(JAM *J) {
    int HH, MM, SS;
    do {
        printf("Masukkan jam (HH MM SS): ");
        scanf("%d %d %d", &HH, &MM, &SS);
    } while (!IsJValid(HH, MM, SS));
    *J = MakeJam(HH, MM, SS);
}

void TulisJam(JAM J) {
    printf("%02d:%02d:%02d\n", J.HH, J.MM, J.SS);
}

int JamToDetik(JAM J) {
    return (J.HH * 3600) + (J.MM * 60) + J.SS;
}

JAM DetikToJam(int N) {
    JAM J;
    N = N % (3600 * 24);  // Modulo untuk memastikan dalam satu hari
    J.HH = N / 3600;
    N = N % 3600;
    J.MM = N / 60;
    J.SS = N % 60;
    return J;
}

int JEQ(JAM J1, JAM J2) {
    return (J1.HH == J2.HH) && (J1.MM == J2.MM) && (J1.SS == J2.SS);
}

int JNEQ(JAM J1, JAM J2) {
    return !JEQ(J1, J2);
}

int JLT(JAM J1, JAM J2) {
    return JamToDetik(J1) < JamToDetik(J2);
}

int JGT(JAM J1, JAM J2) {
    return JamToDetik(J1) > JamToDetik(J2);
}

JAM JPlus(JAM J1, JAM J2) {
    int totalDetik = JamToDetik(J1) + JamToDetik(J2);
    return DetikToJam(totalDetik);
}

JAM JMinus(JAM J1, JAM J2) {
    int totalDetik = JamToDetik(J1) - JamToDetik(J2);
    if (totalDetik < 0) {
        totalDetik += 3600 * 24;  // Jika hasil negatif, tambah satu hari
    }
    return DetikToJam(totalDetik);
}

JAM NextDetik(JAM J) {
    return DetikToJam(JamToDetik(J) + 1);
}

JAM NextNDetik(JAM J, int N) {
    return DetikToJam(JamToDetik(J) + N);
}

JAM PrevDetik(JAM J) {
    return DetikToJam(JamToDetik(J) - 1);
}

JAM PrevNDetik(JAM J, int N) {
    return DetikToJam(JamToDetik(J) - N);
}

int Durasi(JAM JAw, JAM JAkh) {
    return JamToDetik(JAkh) - JamToDetik(JAw);
}

// Pastikan Anda sudah menambahkan semua fungsi terkait ADT JAM dari penjelasan sebelumnya

int main() {
    // Deklarasi variabel JAM
    JAM jam1, jam2;
    
    // Membaca jam pertama
    printf("Masukkan waktu pertama (HH MM SS): \n");
    BacaJam(&jam1);
    
    // Membaca jam kedua
    printf("Masukkan waktu kedua (HH MM SS): \n");
    BacaJam(&jam2);
    
    // Menampilkan jam yang telah dibaca
    printf("Waktu pertama yang dimasukkan adalah: ");
    TulisJam(jam1);
    
    printf("Waktu kedua yang dimasukkan adalah: ");
    TulisJam(jam2);
    
    // Menampilkan durasi antara dua jam
    int durasiDetik = Durasi(jam1, jam2);
    printf("Durasi antara kedua jam dalam detik: %d detik\n", durasiDetik);
    
    // Menambahkan 60 detik ke jam pertama dan menampilkannya
    JAM jamPlus = NextNDetik(jam1, 60);
    printf("Waktu pertama setelah ditambah 60 detik adalah: ");
    TulisJam(jamPlus);
    
    // Menghitung total detik dari jam pertama
    int totalDetikJam1 = JamToDetik(jam1);
    printf("Total detik dari jam pertama: %d detik\n", totalDetikJam1);
    
    return 0;
}

