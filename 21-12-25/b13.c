#include <stdio.h>
int main() {
int a;
    printf("enter number:");
    scanf("%d",&a);
    if(a%2==0&&a%3==0)
    printf("yes\n");
    else
    printf("no\n");
    
    return 0;
}