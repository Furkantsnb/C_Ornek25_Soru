#include<stdio.h>
int main(){
	int a,b,c;
	int max ,min;
	printf("uc tam sayi girin\n");
	scanf("%d %d %d ",&a,&b,&c);

	
	    if (a > b) {
        if (a > b) {
            max = a;
            if (b > c) {
                min = c;
            } else {
                min = b;
            }
        } else {
            max = c;
            min = b;
        }
    } else {
        if (b > c) {
            max = b;
            if (a > c) {
                min = c;
            } else {
                min = a;
            }
        } else {
            max = c;
            min = a;
        }
    }
   
   	printf("Toplam : %d\n",(a+b+c));
	printf("Ortalama : %d\n",(a+b+c)/3);
	printf("Carpim : %d\n",(a*b*c));

    printf("En kucuk : %d\n", min);
    printf("En buyuk : %d\n", max);

	
	
	
	
	return 0;
}
