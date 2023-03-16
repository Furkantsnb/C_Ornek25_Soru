#include <stdio.h>

int main() {
    // 1000 elemanlý dizi oluþturulur, tüm elemanlar baþlangýçta asal kabul edilir.
    int asal[1001];
    int i,j;
    for ( i = 2; i <= 1000; i++) {
        asal[i] = 1;
    }

    // Elemanlarý 2'den baþlayarak kontrol edilir.
    for ( i = 2; i * i <= 1000; i++) {
        // Eðer eleman asal ise, elemanýn katlarýna 0 atanýr.
        if (asal[i] == 1) {
            for ( j = i * i; j <= 1000; j += i) {
                asal[j] = 0;
            }
        }
    }

    // Asal sayýlar ekrana yazdýrýlýr.
    for ( i = 2; i <= 999; i++) {
        if (asal[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
