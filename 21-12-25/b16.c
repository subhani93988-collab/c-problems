#include <stdio.h>
int main() {
    int electricty_bill;
    printf("enter the electricty_bill:");
    scanf("%d",&electricty_bill);
    if(electricty_bill<=100){
    electricty_bill*=1;
    printf("%d",electricty_bill);}
    else  {
    electricty_bill*=2;
    printf("%d",electricty_bill);}

    
    return 0;
}