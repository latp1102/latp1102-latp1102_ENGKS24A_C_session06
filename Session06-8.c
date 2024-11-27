
#include<stdio.h>
int main(){
	float tienBanDau, laiSuat, soThang, tienNhan, tienLai = 0;
	printf("Nhap so tien ban dau: ");
	scanf("%f",&tienBanDau);
	printf("Nhap lai suat: ");
	scanf("%f",&laiSuat);
	printf("Nhap so thang gui: ");
	scanf("%f",&soThang);
	
	tienNhan = tienBanDau; 
	
	for (int i=1;i<=soThang;i++){
	    tienNhan += tienBanDau * laiSuat  / 100;
	    tienBanDau += tienBanDau + tienLai;
	}
		
	printf("\nTien lai: %.3f",(tienNhan - 1000));
	printf("\nTien nhan: %.3f",tienBanDau);
	

	return 0;
}

