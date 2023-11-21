#include <stdio.h>
#include <string.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    printf("%c",s1[0]);
    for(int i=1;i<=strlen(s1)-1;i++) {
        char a = s1[i];
        printf("\n%c",a);
   
    }
    return 0;
}
