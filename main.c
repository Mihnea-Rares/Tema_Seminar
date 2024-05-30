#include <stdio.h>
#include "distribuire.h"
int i;
void afiseaza_sectiunea(const char *nume, int sectiunea[], int n) {
    printf("%s: ", nume);
    for (i = 0; i < n; i++) {
        printf("%d ", sectiunea[i]);
    }
    printf("\n");
}

int main() {
    // Set de date de test
    int cartile1[] = {100, 200, 300, 400, 500, 600, 700, 800, 900};
    int n1 = sizeof(cartile1) / sizeof(cartile1[0]);
    int sectiunea1[100], sectiunea2[100], sectiunea3[100];
    int s1, s2, s3;

    imparte_cartile(cartile1, n1, sectiunea1, &s1, sectiunea2, &s2, sectiunea3, &s3);
    afiseaza_sectiunea("Sectiunea 1", sectiunea1, s1);
    afiseaza_sectiunea("Sectiunea 2", sectiunea2, s2);
    afiseaza_sectiunea("Sectiunea 3", sectiunea3, s3);

    return 0;
}
