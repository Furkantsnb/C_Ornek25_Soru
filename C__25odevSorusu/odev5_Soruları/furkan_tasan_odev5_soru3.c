#include <stdio.h>

int main() {
    // 1000 elemanl� dizi olu�turulur, t�m elemanlar ba�lang��ta asal kabul edilir.
    int asal[1001];
    int i,j;
    for ( i = 2; i <= 1000; i++) {
        asal[i] = 1;
    }

    // Elemanlar� 2'den ba�layarak kontrol edilir.
    for ( i = 2; i * i <= 1000; i++) {
        // E�er eleman asal ise, eleman�n katlar�na 0 atan�r.
        if (asal[i] == 1) {
            for ( j = i * i; j <= 1000; j += i) {
                asal[j] = 0;
            }
        }
    }

    // Asal say�lar ekrana yazd�r�l�r.
    for ( i = 2; i <= 999; i++) {
        if (asal[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
