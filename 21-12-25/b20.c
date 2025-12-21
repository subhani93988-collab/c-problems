#include <stdio.h>
int main() {
    int experience;
    printf("enter experience:");
    scanf("%d",&experience);
    if(experience>=5)
    printf("bonus 5000");
    else
    printf("bonus 2000");
    
    return 0;
}