#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sayi1, sayi2, cevap, dogruCevap;
    srand(time(NULL)); // rastgele sayýlar üretmek için rand fonksiyonunu baþlat

    while (1) {
        // rastgele 1 basamaklý iki sayý üret
        sayi1 = rand() % 9 + 1;
        sayi2 = rand() % 9 + 1;

        // doðru cevabý hesapla
        dogruCevap = sayi1 * sayi2;

        // soruyu ekrana yazdýr
        printf("%d kere %d kactir? ", sayi1, sayi2);

        // öðrenci cevabýný al
        scanf("%d", &cevap);

        // doðru cevap kontrolü
        if (cevap == dogruCevap) {
            printf("Cok guzel!\n");
        } else {
            printf("Lutfen tekrar deneyin.\n");
            while (cevap != dogruCevap) {
                printf("%d kere %d kactir? ", sayi1, sayi2);
                scanf("%d", &cevap);
            }
            printf("Cok guzel!\n");
        }
    }

    return 0;
}
