#include <stdio.h>
#include <string.h>
void main(){
    char password[30];
    printf("==== Program Login ====\n");
    printf("Masukan password: ");
    scanf("%s", password); //input password
    if( strcmp(password, "kopi") == 0 ){ 
        /*fungsi strcmp() merupakan bagian dari library C ( string.h ) 
        tujuan utamanya membandingkan karakter dari dua string secara berurutan sampe nemu 
        ketidakcocokan atau hingga akhir string tercapai atau karakter null '\0' */
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }
    printf("Terima kasih sudah menggunakan aplikasi ini!\n");
}

/* Kesimpulan :
Syntax dalam bahasa C utk percabang if else :
#include <stdio.h>
void main(){
    if (kondisi) {
    // blok kode untuk dijalankan jika kondisi bernilai true
}

#include <stdio.h>
void main(){
    if (kondisi) {
    // blok kode untuk dijalankan jika kondisi bernilai true
    } else {
    // blok kode untuk dijalankan jika kondisi bernilai false
}

#include <stdio.h>
void main(){
    if (kondisi1) {
    // blok kode untuk dijalankan jika kondisi1 bernilai true
    } else if (kondisi2) {
    // blok kode untuk dijalankan jika kondisi2 bernilai true
    } else {
    // blok kode untuk dijalankan jika tidak ada kondisi yang true
}

*/