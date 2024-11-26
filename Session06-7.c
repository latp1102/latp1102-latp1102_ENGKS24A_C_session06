#include<stdio.h>

int main(){
	int i;
	int n;
	
	printf("Moi ban nhap vao 1 so nguyen: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		if ( n % i == 0){
			printf("%d", i);
		}
	}
	
	printf(" Cac uoc so cua %d ",n);
	
	return 0;
}
