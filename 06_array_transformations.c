#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ZAINTERESOWANIA 256

struct DaneOsobowe {
    char *imie;
    char *nazwisko;
    char *pesel;
    char *zainteresowania;
};

void wczytajDane(struct DaneOsobowe *osoba) {
    char temp[MAX_ZAINTERESOWANIA];

    printf("Podaj imie: ");
    osoba->imie = (char *)malloc(sizeof(char) * 50);
    scanf("%s", osoba->imie);

    printf("Podaj nazwisko: ");
    osoba->nazwisko = (char *)malloc(sizeof(char) * 50);
    scanf("%s", osoba->nazwisko);

    printf("Podaj Pesel: ");
    osoba->pesel = (char *)malloc(sizeof(char) * 12);
    scanf("%s", osoba->pesel);

    printf("Podaj zainteresowania: ");
    scanf("%s", temp);
    osoba->zainteresowania = (char *)malloc(sizeof(char) * (strlen(temp) + 1));
    strcpy(osoba->zainteresowania, temp);
}

void wyswietlDane(struct DaneOsobowe *osoba) {
    printf("Imie: %s\n", osoba->imie);
    printf("Nazwisko: %s\n", osoba->nazwisko);
    printf("Pesel: %s\n", osoba->pesel);
    printf("Zainteresowania: %s\n", osoba->zainteresowania);
}

int main() {
    struct DaneOsobowe osoba;

    wczytajDane(&osoba);
    printf("\nWczytane dane:\n");
    wyswietlDane(&osoba);

    // Zwolnienie pamieci zaalokowanej na dane osobowe
    free(osoba.imie);
    free(osoba.nazwisko);
    free(osoba.pesel);
    free(osoba.zainteresowania);

    return 0;
}
