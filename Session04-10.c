#include <stdio.h>

int main() {
    int a, b, c, integer;

    printf("Moi ban nhap vao 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        integer = a;
        a = b;
        b = integer;
    }
    
    if (a > c) {
        integer = a;
        a = c;
        c = integer;
    }
    
    if (b > c) {
        integer = b;
        b = c;
        c = integer;
    }

    printf("Thu tu tang dan: %d %d %d\n", a, b, c);

    return 0;
}
