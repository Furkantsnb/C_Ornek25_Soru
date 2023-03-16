#include<stdio.h>


int main(){
	float x,y;
	printf("iki sayi girin : \n");
	scanf("%f %f ", &x ,&y);
	printf("girilen iki sayinin toplami : %f \n" ,x+y);
	printf("girilen iki sayinin carpimi : %f \n", x*y);
	if(x>y){
	printf("girilen iki sayinin farki : %f \n", x-y);
	printf("girilen iki sayinin bolumu : %f \n", x/y);
	}
	
	else{
	printf("girilen iki sayinin farki : %f \n", y-x);
	printf("girilen iki sayinin bolumu : %f \n", y/x);
	}
	
	
	return 0;
}
