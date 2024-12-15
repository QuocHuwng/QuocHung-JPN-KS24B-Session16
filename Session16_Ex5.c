#include <stdio.h>

void capNhatPhanTu(int *arr, int viTri, int giaTriMoi) {
    *(arr + viTri) = giaTriMoi;
}

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i));  
    }
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]); 

    printf("Mang ban dau:\n");
    inMang(mang, n);
    capNhatPhanTu(mang, 2, 29);  

    printf("\nMang sau khi cap nhat:\n");
    inMang(mang, n);

    return 0;
}

