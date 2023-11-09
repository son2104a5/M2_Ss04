#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap lan luot 3 canh a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c && c==b){
		printf("tam giac deu");
	}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
		printf("tam giac vuong");
	}else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a&&a==c||b==c||a==b){
		printf("tam giac vuong can");
	}else if(a==c||b==c||a==b){
		printf("tam giac can");
	}else if(a+b>c&&a+c>b&&b+c>a){
		printf("tam giac thuong");
	}
}
