#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    if(a%11==0)
    printf("a divisible by 11");
    else 
    printf("a is not divisible by 11");
    
    return 0;
}