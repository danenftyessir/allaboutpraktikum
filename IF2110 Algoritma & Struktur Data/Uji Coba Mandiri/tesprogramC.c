#include <stdio.h>
// HAPALIN ESCAPE SEQUENCE
int main() {
    printf("Hello World! \n"); // Contoh tanpa penggunaan Escape Sequence
    
    printf("====================== \n");
    
    printf("Deskripsi: Tab Horizontal \n");
    printf("Hello \t World! \n"); // Contoh penggunaan Escape Sequence \t
    
    printf("====================== \n");
    
    printf("Deskripsi: Form Feed \n");
    printf("Hello \f World \n"); // Contoh penggunaan Escape Sequence \f

    printf("====================== \n");
    
    printf("Deskripsi: Vertical Tab \n");
    printf("Hello \v World \n"); // Contoh penggunaan Escape Sequence \v

    printf("====================== \n");

    printf("Deskripsi: New Line Feed (LF) \n");
    printf("Hello \n World \n"); // Contoh penggunaan Escape Sequence \n

    printf("====================== \n");

    printf("Deskripsi: Carriage Return (CR) \n");
    printf("Hello \r World \n"); // Contoh penggunaan Escape Sequence \r

    printf("====================== \n");

    printf("Deskripsi: Backspace \n");
    printf("Hello \bWorld \n"); // Contoh penggunaan Escape Sequence \b

    printf("====================== \n");

    printf("Deskripsi: Single Quote \n");
    printf("Hello \' World \n"); // Contoh penggunaan Escape Sequence \'
    printf("Hello ' World \n"); // tanda petik tunggal tidak perlu di-escape di dalam string yang diapit oleh tanda petik ganda.
    

    printf("====================== \n");

    printf("Deskripsi: Back Slash \n");
    printf("Hello \\ World \n"); // Contoh penggunaan Escape Sequence \\

    printf("====================== \n");

    printf("Deskripsi: Null (Menghentikan string setelah null character) \n");
    printf("Hello \0 World \n"); // Contoh penggunaan Escape Sequence \0

    printf("====================== \n");

    printf("Deskripsi: Alert (Membunyikan beep jika terminal mendukung) \n");
    printf("Hello \a World \n"); // Contoh penggunaan Escape Sequence \a

    printf("====================== \n");

    printf("Deskripsi: Double Quote \n");
    printf("Hello \" World \n"); // Contoh penggunaan Escape Sequence \"
    printf("Dia berkata, \"Hello, World!\"\n");
    return 0;
}

/* catatan : 
 Deskripsi: Tab Horizontal, Tab Horizontal (\t): Menambahkan spasi (tab) di antara kata "Hello" dan "World"
Hello    World!
 Deskripsi: Form Feed, mungkin kurang jelas di terminal, tetapi secara umum ini membuat jeda halaman baru pada perangkat keluaran
Hello
 World
 Deskripsi: Vertical Tab, memindahkan posisi vertikal seperti tab pada baris baru
Hello
 World
 Deskripsi: New Line Feed (LF), line baru
Hello
 World
 Deskripsi: Carriage Return (CR), mindahin kursor ke awal baris, sehingga World menimpa Hello
World
 Deskripsi: Backspace, hapus karakter sebelumnya, di sini menghapus spasi antara "Hello" dan "World"
HelloWorld
 Deskripsi: Single Quote, menambahkan tanda kutip tunggal dalam teks
Hello ' World
 Deskripsi: Back Slash, nambahin tanda backslash dalam teks.
Hello \ World
 Deskripsi: Null, menghentikan string setelah karakter \0, jadi tidak ada teks yang dicetak setelahnya.
Hello 
 Deskripsi: Alert, membunyikan suara beep di terminal jika didukung [JARANG]
Hello  World
 Deskripsi: Double Quote, nambahin tanda kutip ganda dalam teks.
Hello " World
*/