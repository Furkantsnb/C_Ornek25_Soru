#include<stdio.h>
#define PI 3.14159

int main(){
	float yaricap,cap,cevre,alan;
	
	printf("Dairenin yaricapini girin : ");
	scanf("%f " ,&yaricap);
	cap = 2*yaricap;
	cevre = 2*PI*yaricap;
	alan = PI*yaricap*yaricap;
	
	printf("Cap : %f\n",cap);
	printf("Cevre : %f\n",cevre);
	printf("Alan : %f\n",alan);
	
	return 0;
}
