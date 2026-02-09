#include <stdio.h>
#include <stdlib.h>

void findMinMax(int* arr, int n, int* minVal, int* maxVal) {
    *minVal = *arr; // Inicjalizacja minVal pierwszym elementem tablicy
    *maxVal = *arr; // Inicjalizacja maxVal pierwszym elementem tablicy

    for (int i = 1; i < n; ++i) {
        if (*(arr + i) < *minVal) {
            *minVal = *(arr + i); // Aktualizacja minVal, jesli znaleziono mniejszy element
        }
        if (*(arr + i) > *maxVal) {
            *maxVal = *(arr + i); // Aktualizacja maxVal, jesli znaleziono większy element
        }
    }
}

int main() {
    int n;
    printf("Podaj ilosc elementow tablicy: ");
    scanf("%d", &n);

    int* tablica = (int*)malloc(n * sizeof(int));
    if (tablica == NULL) {
        printf("Blad alokacji pamieci.");
        return 1;
    }

    printf("Wprowadz %d liczb: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", tablica + i);
    }

    int minVal, maxVal;
    findMinMax(tablica, n, &minVal, &maxVal);

    printf("Elementy tablicy:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", *(tablica + i));
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    printf("\nNajmniejszy element: %d\n", minVal);
    printf("Najwiekszy element: %d\n", maxVal);

    free(tablica); // Zwolnienie pamieci
    return 0;
}



