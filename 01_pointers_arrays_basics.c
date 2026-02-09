#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funkcja generujaa losowa liczbe z przedzialu [a, b]
int losowaLiczba(int a, int b) {
    return rand() % (b - a + 1) + a;
}

int main() {
    int n, a, b;

    printf("Podaj rozmiar tablicy (n): ");
    scanf("%d", &n);

    printf("Podaj dolny zakres (a): ");
    scanf("%d", &a);

    printf("Podaj gorny zakres (b): ");
    scanf("%d", &b);

    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    // Tworzenie dynamicznej tablicy o rozmiarze n
    int *Tab = (int *)malloc(n * sizeof(int));

    if (Tab == NULL) {
        printf("Blad alokacji pamieci.\n");
        return 1;
    }

    // Wypełnianie tablicy losowymi liczbami
    for (int i = 0; i < n; ++i) {
        *(Tab + i) = losowaLiczba(a, b);
    }

    // Wyswietlanie elementow tablicy (po 10 w wierszu)
    printf("Elementy tablicy Tab:\n");
    for (int i = 0; i < n; ++i) {
        printf("%5d ", *(Tab + i));
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    // Zwolnienie zaalokowanej pamięci
    free(Tab);

    return 0;
}
