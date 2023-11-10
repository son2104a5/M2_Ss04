#include<stdio.h>
int main(){
	int n1,n2,n3,a;
	printf("n1= ");
	scanf("%d",&n1);
	printf("n2= ");
	scanf("%d",&n2);
	printf("n3= ");
	scanf("%d",&n3);
	int max=n1; int min=n1;
	if(max<n2){
		max=n2;
		a=n1;
	if(max<n3){
		max=n3;
		a=n2;
		min=n1;
	}else if(a>n3){
		max=n2;
		a=n1;
		min=n3;
	}else{
		max=n2;
		a=n3;
		min=n1;
	}
	}else if(max<n3){
		max=n3;
		a=n1;
		min=n2;
	}else if(n2>n3){
		max=n1;
		a=n2;
		min=n3;
	}else{
		max=n1;
		a=n3;
		min=n2;
	}
	printf("%d %d %d",max,a,min);
}
