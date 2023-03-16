#include <stdio.h>

int main() {
    int maas_kodu;
    float maas, saatlik_ucret, satis_miktari, malzeme_adedi;

    while (1) {
        printf("Lutfen maas kodunu girin (1-mudur, 2-vardiyali, 3-komisyon, 4-parca isci) (Cikmak icin 0): ");
        scanf("%d", &maas_kodu);

        if (maas_kodu == 0) {
            break;
        }

        switch(maas_kodu) {
            case 1:
                printf("Mudurun haftalik maasini girin: ");
                scanf("%f", &maas);
                break;
            case 2:
                printf("Vardiyali iscinin saatlik ucretini ve calistigi saat sayisini girin: ");
                scanf("%f %f", &saatlik_ucret, &maas);

                if (maas > 40) {
                    maas = 40 * saatlik_ucret + (maas - 40) * saatlik_ucret * 1.5;
                } else {
                    maas = maas * saatlik_ucret;
                }
                break;
            case 3:
                printf("Komisyon iscinin haftalik brut satis miktarini girin: ");
                scanf("%f", &satis_miktari);
                maas = 250 + 0.057 * satis_miktari;
                break;
            case 4:
                printf("Parca iscinin urettigi malzeme adedini ve malzeme basina alinan ucreti girin: ");
                scanf("%f %f", &malzeme_adedi, &maas);
                maas = malzeme_adedi * maas;
                break;
            default:
                printf("Gecersiz maas kodu girdiniz.");
                continue;
        }

        printf("Haftalik maas: %.2f\n", maas);
    }

    return 0;
}
