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
 özyinelemeli fonksiyonlar genellikle yüksek bellek kullanımı
 gerektirir ve sonlandırma koşulları doğru bir şekilde belirlenmediğinde
 sonsuz döngülere neden olabilir. 
*/
