#include <stdio.h>
#include <string.h> 

void reverseString(char *str) {
    // Inicjalizacja wskaznika na koniec napisu
    char *endPtr = str;
    // Przesuniecie wskaznika na koniec napisu
    while (*endPtr != '\0') {
        endPtr++;
    }
    endPtr--; // Przesuniecie wskaznika o 1 wstecz, aby wskazywal na ostatni znak

    // Odwracanie napisu za pomoca dwoch wskaznikow
    while (str < endPtr) {
        // Zamiana znakow na koncach napisu
        char temp = *str;
        *str = *endPtr;
        *endPtr = temp;
        // Przesuniecie wskaznikow wewnatrz napisu
        str++;
        endPtr--;
    }
}

int main() {
    char input[100]; // Zalozenie: maksymalna dlugosc napisu wynosi 100 znakow

    printf("Podaj napis: ");
    fgets(input, sizeof(input), stdin); // Wczytanie napisu z klawiatury

    // Usuniecie znaku nowej linii z wczytanego napisu
    char *newlinePtr = strchr(input, '\n');
    if (newlinePtr != NULL) {
        *newlinePtr = '\0';
    }

    // Odwrocenie napisu
    reverseString(input);

    // Wyswietlenie odwroconego napisu
    printf("Odwrocony napis: %s\n", input);

    return 0;
}
