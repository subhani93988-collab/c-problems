#include <stdio.h>
int main() {
    int num;
    num = 4;
    if (num % 2 == 0) {
        printf("Input: %d Output: Even\n", num);
    } else {
        printf("Input: %d Output: Odd\n", num);
    }
    num = 7;
    if (num % 2 == 0) {
        printf("Input: %d Output: Even\n", num);
    } else {
        printf("Input: %d Output: Odd\n", num);
    }
    
    return 0;
}