#include<stdio.h>				
int main(){				
	int a, b tachSo, total, dem=0;			
	b = 100;			
	while (1){			
		a = b;		
		total = 0;		
		if (dem == 4){		
			break;	
		}		
	while (a > 0){			
		tachSo = a % 10;		
		total = total + (tachSo*tachSo*tachSo);		
		a = a / 10;		
		}		
	if (total == b){			
		dem++;		
		printf("%d ", b);		
	}			
	b++;			
				
	}			
	return 0;			
}				
