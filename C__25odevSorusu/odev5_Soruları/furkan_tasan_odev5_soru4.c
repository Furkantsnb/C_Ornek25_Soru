#include <stdio.h>

int main() {
int n, i, max1, max2;
printf("Dizi boyutunu girin: ");
scanf("%d", &n);

int arr[n];

// Kullanýcýdan elemanlarý alýn
for (i = 0; i < n; i++) {
printf("Dizinin %d. elemanini girin: ", i+1);
scanf("%d", &arr[i]);
}

// En büyük ve en büyük ikinci elemaný bul
max1 = max2 = arr[0]; // Baþlangýçta en büyük ve en büyük ikinci eleman ilk eleman olarak atanýr
for (i = 1; i < n; i++) {
if (arr[i] > max1) {
max2 = max1;
max1 = arr[i];
} else if (arr[i] > max2 && arr[i] < max1) {
max2 = arr[i];
}
}

printf("En buyuk eleman: %d\n", max1);
printf("En buyuk ikinci eleman: %d\n", max2);

return 0;
}
