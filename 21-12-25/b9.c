#include <stdio.h>
int main() {
    char s;
    printf(" a is single character:");
    scanf("%c",&s);
    if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
    printf("vowels");
    else
    printf("consonents");
    
    return 0;
}