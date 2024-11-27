#include <stdio.h>

int main() {
    int year, month, day;

    printf("Nhap vao so nam: ");
    scanf("%d", &year);

    printf("Nhap vao so thang: ");
    scanf("%d", &month);

    
    int nam_nhuan = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    
    switch (month) {
        case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
            printf("co 31 ngay\n", month);
            break;
        case 4: 
		case 6: 
		case 9: 
		case 11:
            printf("co 30 ngay\n", month);
            break;
        case 2: 
            printf("co 28 , 29 ngay\n", month);
            break;
        default:
            printf("khong hop le\n");
    }
    return 0;
}
