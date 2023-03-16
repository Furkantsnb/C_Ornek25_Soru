#include <stdio.h>

// çift sayý kontrol fonksiyonu
int ciftMi(int sayi) {
    if (sayi % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int sayilar[100]; // en fazla 100 sayý giriþi yapýlabilir
    int n; // giriþ sayýsý
    printf("Kac tane sayi gireceksiniz? ");
    scanf("%d", &n);

    // sayýlarý giriþ al
    int i;
    for (i = 0; i < n; i++) {
        printf("%d. sayiyi girin: ", i+1);
        scanf("%d", &sayilar[i]);
    }
    printf("**************************\n");

    // sayýlarýn çift olup olmadýðýný kontrol et ve sonucu ekrana yazdýr
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
