#include <stdio.h>

#define MAX_NAME_LENGTH 21

int is_consonant(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    return (c >= 'a' && c <= 'z') && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int main() {
    char name[MAX_NAME_LENGTH];
    scanf("%20s", name);
    if (is_consonant(name[0])) {
        printf("%s menjawab: \"Bintang skibidi. Matahari terbenam di balik skibidi, hanya skibidi 7 yang tahu apa artinya\"\n", name);
    } else {
        printf("%s menjawab: \"Bintang skibidi, bintang yang paling skibidi tertinggi itu kecuali skibidi 5 hanyalah mewing besar\"\n", name);
    }
    return 0;
}