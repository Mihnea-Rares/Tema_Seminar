#include "distribuire.h"

void imparte_cartile(int cartile[], int n, int sectiunea1[], int *n1, int sectiunea2[], int *n2, int sectiunea3[], int *n3) {
    int S1 = 0, S2 = 0, S3 = 0;
    int i;
    *n1 = 0;
    *n2 = 0;
    *n3 = 0;

    for ( i = 0; i < n; i++) {
        if (S1 <= S2 && S1 <= S3) {
            sectiunea1[*n1] = cartile[i];
            S1 += cartile[i];
            (*n1)++;
        } else if (S2 <= S1 && S2 <= S3) {
            sectiunea2[*n2] = cartile[i];
            S2 += cartile[i];
            (*n2)++;
        } else {
            sectiunea3[*n3] = cartile[i];
            S3 += cartile[i];
            (*n3)++;
        }
    }
}
