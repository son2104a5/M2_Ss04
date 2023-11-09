#include<stdio.h>
int main(){
	int a,b;
	printf("nhap thang: ");
	scanf("%d",&a);
	printf("nhap nam: ");
	scanf("%d",&b);
	switch(a){
	case 1:
	printf("31 ngay");
	break;
	case 3:
	printf("31 ngay");
	break;
	case 5:
	printf("31 ngay");
	break;
	case 7:
	printf("31 ngay");
	break;
	case 8:
	printf("31 ngay");
	break;	
	case 10:
	printf("31 ngay");	
	break;
	case 12:
	printf("31 ngay");
	break;
	case 4:
	printf("30 ngay");
	break;
	case 6:
	printf("30 ngay");
	break;
	case 9:
	printf("30 ngay");
	break;
	case 11:
	printf("30 ngay");
	break;
	case 2:
	(b%4==0&&b%100=!0) ? printf("29 ngay") : printf("28 ngay");
	break;
	}
}
