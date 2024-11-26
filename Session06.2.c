#include<stdio.h>

int main(){
	int a, b, c, d, e, le=0,chan=0;
	
	printf("Moi ban nhap vao 5 so nguyen: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a % 2 == 1){
	
	le++;
    } else {
    	chan++;
	}
		if(b % 2 == 1){
	
	le++;
    } else {
    	chan++;	
	}
		if(c % 2 == 1){
	
	le++;
    } else {
    	chan++;
    }
		if(d % 2 == 1){
	
	le++;
    } else {
    	chan++;
    }
		if(e % 2 == 1){
	
	le++;
    } else {
    	chan++;
    }
	printf("Danh sach lan luot so le, chan: %d, %d\n", le++, chan++);
    
	
	return 0;
}
