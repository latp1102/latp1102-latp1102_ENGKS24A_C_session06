#include<stdio.h>

int main(){
	int a, b, c, d, e, tongSoLe=0;
	
	printf("Moi ban nhap vao 5 so nguyen: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a % 2 == 1){
	}
	tongSoLe = tongSoLe + a;
		if(b % 2 == 1){
		
	tongSoLe = tongSoLe + b;
	}
		if(c % 2 == 1){
		
	tongSoLe = tongSoLe + c;
    }
		if(d % 2 == 1){
		
	tongSoLe = tongSoLe + d;
    }
		if(e % 2 == 1){
		
	tongSoLe = tongSoLe + e;
    }
	printf("Tong so le  %d", tongSoLe);
	
	return 0;
}
