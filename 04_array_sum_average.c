#include <stdio.h>

// Funkcja do porownywania dwoch napisow
int porownaj_napisy(const char *napis1, const char *napis2) {
    while (*napis1 && *napis2) {
        if (*napis1 != *napis2) {
            return 0; // Napisy sa rozne
        }
        napis1++;
        napis2++;
    }
    // Jesli oba napisy dojda do konca jednoczesnie, sa identyczne
    return *napis1 == *napis2;
}

int main() {
    char napis1[100], napis2[100];

    printf("Podaj pierwszy napis: ");
    scanf("%s", napis1);

    printf("Podaj drugi napis: ");
    scanf("%s", napis2);

    if (porownaj_napisy(napis1, napis2)) {
        printf("Napisy sa identyczne.\n");
    } else {
        printf("Napisy nie sa identyczne.\n");
    }

    return 0;
}
