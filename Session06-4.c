#include<stdio.h>

int main(){
	float a, b, c, delta, x1, x2, x, x0;
	
	printf("Moi ban nhap vao 3 so a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0){
    	if (b == 0){
    		if (c == 0){
    			printf ("Phuong trinh vo so nghiem");
			}
		} else if (b !=0 ){
			x0  = -c / b;
			printf ("Phuong trinh co 1 nghiem %.2f", x0);
		} else if (c!=0){
			printf ("Phuong trinh vo nghiem");
		}
	} else {
		delta = (b *b) -(4 * a * c);
		if (delta == 0){
			x = -b / 2 * a;
			printf ("Phuong trinh co nghiem kep %.2f", x);
		} else if (delta > 0){
			x1=(-b + sqrt(delta)) / 2 * a;
			x2=(-b - sqrt(delta)) / 2 * a;
			printf ("Phuong trinh co 2 nghiem phan biet %.2f va %.2f", x1 , x2);
		} else {
			printf ("Phuong trinh vo nghiem");
		}
	}
    
	
	return 0;
}
