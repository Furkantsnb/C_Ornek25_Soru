#include <stdio.h>
#include <stdlib.h>

// int_compare fonksiyonunu �nceden bildiriyoruz.
int int_compare(const void *a, const void *b);

int main() {
    int dizi[10], i;

    // Dizinin elemanlar�n� kullan�c�dan al
    printf("Lutfen 10 adet sayi girin:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. eleman: ", i+1);
        scanf("%d", &dizi[i]);
    }

    // Diziyi s�rala
    qsort(dizi, 10, sizeof(int), int_compare);

    // S�ralanm�� diziyi ekrana yazd�r
    printf("Siralanmis dizi:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}

// qsort () i�levi taraf�ndan kullan�lmak �zere iki say� aras�nda kar��la�t�rma yapar
int int_compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
