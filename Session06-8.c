#include<stdio.h>
int main(){
	float tienBanDau, laiSuat, soThang, tienNhan, tienLai = 0,a;
	printf("Nhap so tien ban dau: ");
	scanf("%f",&tienBanDau);
	printf("Nhap lai suat: ");
	scanf("%f",&laiSuat);
	printf("Nhap so thang gui: ");
	scanf("%f",&soThang);
	a=tienBanDau;
	tienLai = tienBanDau;
	for (int i=1;i<=soThang;i++){
		tienLai = tienBanDau * (laiSuat / 100);
		tienBanDau=tienBanDau+tienLai;
	}
	printf("\nTien lai: %.3f",(tienBanDau-a));
	printf("\nTien nhan: %.3f",tienBanDau);
	

	return 0;
}

