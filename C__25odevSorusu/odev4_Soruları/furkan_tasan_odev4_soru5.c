#include <stdio.h>

void main() {
    static int sayac = 1;
    printf("main fonksiyonu %d. kez cagrildi.\n", sayac);

    if (sayac == 10) {
        printf("Program sonlandirildi.\n");
        return;
    } else {
        sayac++;
        main();
    }
}
/*
 �zyinelemeli fonksiyonlar genellikle y�ksek bellek kullan�m�
 gerektirir ve sonland�rma ko�ullar� do�ru bir �ekilde belirlenmedi�inde
 sonsuz d�ng�lere neden olabilir. 
*/
