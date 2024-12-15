#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;

    printf("Truoc khi doi: x = %d, y = %d\n", x, y);
    int *pointerX = &x; 
    int *pointerY = &y;  

    int temp = *pointerX; 
    *pointerX = *pointerY;     
    *pointerY = temp;      
    printf("Sau khi doi: x = %d, y = %d\n", x, y);

    return 0;
}

