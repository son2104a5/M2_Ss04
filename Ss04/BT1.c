#include<stdio.h>
int main(){
	int a;
	printf("nhap so:");
	scanf("%d",&a);
	(a%3==0 && a%5==0) ? printf("%d chia het cho ca 3 va 5") : printf("%d khong chia het cho ca 3 va 5");
}
