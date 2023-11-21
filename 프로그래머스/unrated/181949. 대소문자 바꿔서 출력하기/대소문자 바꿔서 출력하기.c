#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    for(int i=0;i<strlen(s1);i++) {
        char a = s1[i];  
        if(isupper(a)) 
            putchar(a+32);
        else 
            putchar(a-32);
        }
    return 0;
}
