#include <stdio.h>

// �ift say� kontrol fonksiyonu
int ciftMi(int sayi) {
    if (sayi % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int sayilar[100]; // en fazla 100 say� giri�i yap�labilir
    int n; // giri� say�s�
    printf("Kac tane sayi gireceksiniz? ");
    scanf("%d", &n);

    // say�lar� giri� al
    int i;
    for (i = 0; i < n; i++) {
        printf("%d. sayiyi girin: ", i+1);
        scanf("%d", &sayilar[i]);
    }
    printf("**************************\n");

    // say�lar�n �ift olup olmad���n� kontrol et ve sonucu ekrana yazd�r
    int j;
    for ( i = 0; j < n; j++) {
        if (ciftMi(sayilar[j])) {
            printf("%d sayisi cifttir.\n", sayilar[j]);
        } else {
            printf("%d sayisi tektir.\n", sayilar[j]);
        }
    }

    return 0;
}
