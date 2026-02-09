#include <stdio.h>

void toUpperCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; // Zamiana na duza litere
        }
        str++; // Przechodzenie do kolejnego znaku w napisie
    }
}

int main() {
    char input[100]; // Zalozenie maksymalnej dlugosci napisu
    printf("Wpisz napis: ");
    fgets(input, sizeof(input), stdin); // Wczytywanie napisu z klawiatury

    toUpperCase(input); // Zamiana na duże litery

    printf("Napis w duzych literach: %s\n", input); // Wyswietlenie napisu w dużych literach

    return 0;
}
