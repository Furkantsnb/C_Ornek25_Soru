#include <stdio.h>

int main(){
	int x,y;
	printf("iki sayi girin... ");
	scanf("%d %d " ,&x,&y);
	if(x>y) {
		printf("girilen iki sayidan en buyuk deger : %d ", x);
	}

	if(y>x){
			printf("girilen iki sayidan en buyuk : %d  ",y);
	}
	if(x==y){
			printf("girilen iki sayi birbirine esit   ");
	}
	
	return 0;
}
