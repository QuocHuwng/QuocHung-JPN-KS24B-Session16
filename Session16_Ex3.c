#include <stdio.h>

void tinhTong(int *a, int *b, int *ketQua) {
    *ketQua = *a + *b;  
}
int main() {
    int x = 1;
    int y = 2;
    int sum;  

    tinhTong(&x, &y, &sum); 
    printf("Tong cua %d va %d la: %d\n", x, y, sum);

    return 0;
}

