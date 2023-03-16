#include <stdio.h>

// Fonksiyon: hesapla
// Açýklama: Park ücretini hesaplar
// Girdiler:
//   parkSuresi: Park süresi (saat cinsinden)
// Çýktý:
//   Park ücreti
float ucretHesapla(int parkSuresi) {
    float ucret;
    
    if (parkSuresi <= 3) {
        ucret = 2.0;
    } else if (parkSuresi > 3 && parkSuresi <= 24) {
        ucret = 2.0 + (parkSuresi - 3) * 0.5;
        if (ucret > 10.0) {
            ucret = 10.0;
        }
    } else {
        ucret = 10.0;
    }
    
    return ucret;
}

// Ana fonksiyon
int main() {
    int parkSuresi1 = 2, parkSuresi2 = 4, parkSuresi3 = 12, parkSuresi4 = 28;
    float ucret1, ucret2, ucret3, ucret4;
    
    ucret1 = ucretHesapla(parkSuresi1);
    ucret2 = ucretHesapla(parkSuresi2);
    ucret3 = ucretHesapla(parkSuresi3);
    ucret4 = ucretHesapla(parkSuresi4);
    float toplamUcret = ucret1+ucret2+ucret3+ucret4;
    int toplamSaat = parkSuresi1+parkSuresi2+parkSuresi3+parkSuresi4+
    printf("|  Arac  |  Park Suresi (saat)  |  Ucret  |\n");
    printf("|--------|----------------------|---------|\n");
    printf("|  Araba1|         %2d           | $%6.2f |\n", parkSuresi1, ucret1);
    printf("|  Araba2|         %2d           | $%6.2f |\n", parkSuresi2, ucret2);
    printf("|  Araba3|         %2d           | $%6.2f |\n", parkSuresi3, ucret3);
    printf("|  Araba4|         %2d           | $%6.2f |\n", parkSuresi4, ucret4);
    printf("|  Toplam|         %2d           | $%6.2f |\n", toplamSaat, toplamUcret);
    
    return 0;
}
