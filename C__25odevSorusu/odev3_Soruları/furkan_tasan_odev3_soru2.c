#include <stdio.h>

int main() {
    int carpim = 1;
    int toplam = 0;
    int i;
    for ( i = 1; i <= 15; i += 1) {
        carpim *= i;
        toplam += carpim;
    }
    printf("1'den 15'e kadar olan tek sayilarin carpimi: %d\n", carpim);
    printf("1'den 15'e kadar olan tek sayilarin carpimlarinin toplami: %d\n", toplam);
    return 0;
}
