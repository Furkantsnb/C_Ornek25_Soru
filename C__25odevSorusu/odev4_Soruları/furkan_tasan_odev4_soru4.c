#include <stdio.h>
#include <string.h>
void kare(int kenar) {
    int i, j;

    for(i=1; i<=kenar; i++) {
        for(j=1; j<=kenar; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void iciniDoldur(char desen[], int kenar) {
    int i, j;

    for (i = 0; i < kenar; i++) {
        for (j = 0; j < kenar; j++) {
         
           printf("%c ", desen[i % strlen(desen)]);
        }
        printf("\n");
    }
}

int main() {
    int kenar;
    printf("Kenar uzunlugunu girin: ");
    scanf("%d", &kenar);
    kare(kenar);
    
    
    
    int kenar1;
    char desen[20];

    printf("Karenin kenar uzunlugunu giriniz: ");
    scanf("%d", &kenar1);

    printf("Karenin desenini giriniz: ");
    scanf("%s", desen);

    iciniDoldur(desen, kenar1);
    return 0;
}
