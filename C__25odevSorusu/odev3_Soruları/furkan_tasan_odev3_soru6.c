#include <stdio.h>

int main() {
    float sayi1, sayi2, sonuc;
    char operator;

    printf("Lutfen islem yapmak istediginiz iki sayiyi ve islem operatorunu sirasiyla girin: ");
    scanf("%f %f %c", &sayi1, &sayi2, &operator);

    switch(operator) {
        case '+':
            sonuc = sayi1 + sayi2;
            printf("%.2f + %.2f = %.2f", sayi1, sayi2, sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("%.2f - %.2f = %.2f", sayi1, sayi2, sonuc);
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("%.2f * %.2f = %.2f", sayi1, sayi2, sonuc);
            break;
        case '/':
            if (sayi2 == 0) {
                printf("Hata: sifira bolme hatasi.");
            } else {
                sonuc = sayi1 / sayi2;
                printf("%.2f / %.2f = %.2f", sayi1, sayi2, sonuc);
            }
            break;
        default:
            printf("Hata: gecersiz operator girdiniz.");
    }

    return 0;
}
