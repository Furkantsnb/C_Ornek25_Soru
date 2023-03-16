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
/*20 fakt�riyeli 21.47 trilyon gibi �ok b�y�k bir say�d�r.
 Bu, bilgisayar�n hesaplama s�n�rlar�n� a�an bir say�d�r 
 ve program y�r�t�l�rken bu say�y� hesaplamaya �al��mak,
 bir tamsay� ta�mas� hatas�na neden olacakt�r. Bu, program�n
 beklenmedik �ekilde sonlanmas�na ve hatalar�n g�r�nt�lenmesine
 neden olabilir. Bu nedenle, b�y�k fakt�riyelleri hesaplamadan
 �nce, hesaplanacak sonu�lar�n veri t�rleri ve bilgisayar�n 
 hesaplama kapasitesi gibi fakt�rler dikkate al�nmal�d�r.*/
