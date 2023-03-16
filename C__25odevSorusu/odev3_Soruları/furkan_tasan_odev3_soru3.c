#include <stdio.h>

int main() {
    int n, faktoriyel,i,j;
    printf("n sayisini girin: ");
    scanf("%d", &n);
    printf("Faktoriyel:\n");
    for ( i = 1; i <= n; i++) {
        faktoriyel = 1;
        for ( j = 1; j <= i; j++) {
            faktoriyel *= j;
        }
        printf("%d! = %d\n", i, faktoriyel);
    }
    return 0;
}
/*20 faktöriyeli 21.47 trilyon gibi çok büyük bir sayýdýr.
 Bu, bilgisayarýn hesaplama sýnýrlarýný aþan bir sayýdýr 
 ve program yürütülürken bu sayýyý hesaplamaya çalýþmak,
 bir tamsayý taþmasý hatasýna neden olacaktýr. Bu, programýn
 beklenmedik þekilde sonlanmasýna ve hatalarýn görüntülenmesine
 neden olabilir. Bu nedenle, büyük faktöriyelleri hesaplamadan
 önce, hesaplanacak sonuçlarýn veri türleri ve bilgisayarýn 
 hesaplama kapasitesi gibi faktörler dikkate alýnmalýdýr.*/
