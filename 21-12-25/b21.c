#include <stdio.h>
int main() {
    int pass;
    printf("enter pass:");
    scanf("%d",&pass);
    if(pass==1234)
    printf("access granted");
    else
    printf("not granted");    
    return 0;
}