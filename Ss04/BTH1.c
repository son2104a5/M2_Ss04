#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	(n%2==0) ? printf("%d la so chan",n):printf("%d la so le",n);
}
