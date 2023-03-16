#include <stdio.h>

int main() {
    int sayi1, sayi2, sayi3;

    printf("Uc sayi girin: ");
    scanf("%d %d %d", &sayi1, &sayi2, &sayi3);

    printf("Sayi 1 ");
    if (sayi1 % 2 == 0) {
        printf("cift\n");
    } else {
        printf("tek\n");
    }

    printf("Sayi 2 ");
    if (sayi2 % 2 == 0) {
        printf("cift\n");
    } else {
        printf("tek\n");
    }

    printf("Sayi 3 ");
    if (sayi3 % 2 == 0) {
        printf("cift\n");
    } else {
        printf("tek\n");
    }

    printf("Sayi 1 ");
    if (sayi2 % sayi1 == 0 && sayi3 % sayi1 == 0) {
        printf("sayi 2 ve sayi 3'un tam katidir\n");
    } else if (sayi2 % sayi1 == 0) {
        printf("sayi 2'nin tam katidir\n");
    } else if (sayi3 % sayi1 == 0) {
        printf("sayi 3'un tam katidir\n");
    } else {
        printf("hicbiri sayi 2 veya sayi 3'un tam kati degildir\n");
    }

    printf("Sayi 2 ");
    if (sayi1 % sayi2 == 0 && sayi3 % sayi2 == 0) {
        printf("sayi 1 ve sayi 3'un tam katidir\n");
    } else if (sayi1 % sayi2 == 0) {
        printf("sayi 1'in tam katidir\n");
    } else if (sayi3 % sayi2 == 0) {
        printf("sayi 3'un tam katidir\n");
    } else {
        printf("hicbiri sayi 1 veya sayi 3'un tam kati degildir\n");
    }

    printf("Sayi 3 ");
    if (sayi1 % sayi3 == 0 && sayi2 % sayi3 == 0) {
        printf("sayi 1 ve sayi 2'nin tam katidir\n");
    } else if (sayi1 % sayi3 == 0) {
        printf("sayi 1'in tam katidir\n");
    } else if (sayi2 % sayi3 == 0) {
        printf("sayi 2'nin tam katidir\n");
    } else {
        printf("hicbiri sayi 1 veya sayi 2'nin tam kati degildir\n");
    }
        
        return 0;
    }
