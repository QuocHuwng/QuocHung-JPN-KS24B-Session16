#include <stdio.h>

int main() {
    int x = 1;     
    int *pointer = &x;  
    printf("Gia tri cua x: %d\n", x); 
    printf("Dia chi cua x: %p\n", &x); 
    printf("Gia tri cua pointer: %d\n", *pointer); 
    printf("Dia chi cua pointer: %p\n", pointer); 

    return 0;
}
