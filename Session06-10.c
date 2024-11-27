#include<stdio.h>
int main(){
	int n, num = 0;
	printf("Moi ban nhap vao so nguyen: ");
	scanf("%d",&n);
	
	for (int i = 2;i < n; i++){
		if (n % i == 0){
			num++;
		}
	} 
	if (n < 2){
		printf("khong phai so nguyen to");
	} else if (num == 0){
		printf("la so nguyen to");
	} else {
		printf("khong phai so nguyen to");
	}
	return 0;
}
