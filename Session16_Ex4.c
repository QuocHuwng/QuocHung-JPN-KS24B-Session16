#include <stdio.h>

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i)); 
    }
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};  
    int n = sizeof(mang) / sizeof(mang[0]);  
    inMang(mang, n);

    return 0;
}

