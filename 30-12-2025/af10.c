#include <stdio.h>
int main() {
    int marks;
    scanf("marks:%d\n",marks);
    if((marks>=60)&&(marks<=100))
    printf("grade a");
    else if (marks<=45)
    printf("grade c");
    else 
    printf("invalid marks");
    
    
    return 0;
}