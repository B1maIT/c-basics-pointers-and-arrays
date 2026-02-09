#include <stdio.h>
#include <stdlib.h>

int main() {
    // Wczytanie tekstu do zmiennej napisi
    char napisi[100]; // Zalozenie: maksymalna dlugosc tekstu to 100 znakow
    printf("Wpisz tekst: ");
    fgets(napisi, 100, stdin);

    // Znalezienie dlugosci napisu
    int length = 0;
    while (napisi[length] != '\0') {
        length++;
    }

    // Alokacja pamieci dla napisa2
    char *napis2 = (char*)malloc((length + 1) * sizeof(char));

    // Kopiowanie tekstu z napisi do napis2
    char *p_napisi = napisi;
    char *p_napis2 = napis2;
    while (*p_napisi != '\0') {
        *p_napis2 = *p_napisi;
        p_napisi++;
        p_napis2++;
    }
    *p_napis2 = '\0'; // Dodanie znaku null na koniec napisu napis2

    // Wypisanie obu napisow
    printf("Napis1: %s\n", napisi);
    printf("Napis2: %s\n", napis2);

    // Zwolnienie zaalokowanej pamieci
    free(napis2);

    return 0;
}
