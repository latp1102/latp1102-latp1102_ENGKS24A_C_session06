#include<stdio.h>

int main(){
	int n;
	
	float money = 1000;
	float laiSuat = 0.01, tienLai;

	printf("nhap so thang la");
	scanf("%d",&n);
	
	
	for(int i = 1; i <= n; i++){
		money = money + money * laiSuat;
	}

	printf("so tien lai: %.3f\n",tienLai = money - 1000);
	printf("so tien nhan: %.3f\n",money);
	
	
	return 0;
}
