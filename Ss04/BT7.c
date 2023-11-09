#include<stdio.h>
int main(){
	float a,b,c=26,d=c-b;
	printf("nhap luong co ban: ");
	scanf("%f",&a);
	printf("nhap ngay cong thuc te: ");
	scanf("%f",&b);
	if(b>c){
		float luong=a*(b/c);
		printf("luong: %f",luong);
	}else{
		 float luong=a*(b/c)*d*(150/100);
		printf("luong: %f",luong);
	}
}

