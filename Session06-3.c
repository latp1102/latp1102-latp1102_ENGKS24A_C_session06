#include<stdio.h>

int main(){
	int a=1234;
	int b;
	
	printf("Moi ban nhap vao mat khau: ");
	scanf("%d",&b);
	
	if(b == a){
		printf("Ban nhap dung roi");
	} else {
		printf("Ban nhap sai roi");
	}

	return 0;
}
