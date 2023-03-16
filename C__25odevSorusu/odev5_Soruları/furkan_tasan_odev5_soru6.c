#include <stdio.h>
#include <stdlib.h>

// int_compare fonksiyonunu önceden bildiriyoruz.
int int_compare(const void *a, const void *b);

int main() {
    int dizi[10], i;

    // Dizinin elemanlarýný kullanýcýdan al
    printf("Lutfen 10 adet sayi girin:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. eleman: ", i+1);
        scanf("%d", &dizi[i]);
    }

    // Diziyi sýrala
    qsort(dizi, 10, sizeof(int), int_compare);

    // Sýralanmýþ diziyi ekrana yazdýr
    printf("Siralanmis dizi:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}

// qsort () iþlevi tarafýndan kullanýlmak üzere iki sayý arasýnda karþýlaþtýrma yapar
int int_compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
