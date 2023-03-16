#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sayi1, sayi2, cevap, dogruCevap;
    srand(time(NULL)); // rastgele say�lar �retmek i�in rand fonksiyonunu ba�lat

    while (1) {
        // rastgele 1 basamakl� iki say� �ret
        sayi1 = rand() % 9 + 1;
        sayi2 = rand() % 9 + 1;

        // do�ru cevab� hesapla
        dogruCevap = sayi1 * sayi2;

        // soruyu ekrana yazd�r
        printf("%d kere %d kactir? ", sayi1, sayi2);

        // ��renci cevab�n� al
        scanf("%d", &cevap);

        // do�ru cevap kontrol�
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
