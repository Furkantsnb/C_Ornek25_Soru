#include <stdio.h>
#include <stdbool.h>

int main() {
    int sayi, sayac = 0;
    bool gecmis[91] = {false}; // 10 ile 100 arasýndaki sayýlar için bool dizisi

    while (sayac < 20) {
        printf("Lutfen %d. sayiyi girin: ", sayac + 1);
        scanf("%d", &sayi);

        if (sayi < 10 || sayi > 100) {
            printf("Lutfen 10 ile 100 arasinda bir sayi girin.\n");
            continue;
        }

        if (gecmis[sayi - 10]) { // Daha önce girilen bir sayý
            printf("%d sayisi daha once girilmiþ.\n", sayi);
        } else { // Daha önce girilmemiþ bir sayý
            printf("%d sayisi kabul edildi.\n", sayi);
            gecmis[sayi - 10] = true;
            sayac++;
        }
    }

    printf("Tum sayilar alindi.\n");
    return 0;
}
