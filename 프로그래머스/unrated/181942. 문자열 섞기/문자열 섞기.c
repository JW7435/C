#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str1, const char* str2) {
    char* answer = (char*)malloc(strlen(str1)*2+1);
    
    for(int i=0;i<=strlen(str1)*2;i+=2) {
        answer[0+i] = str1[0+i/2];
        answer[1+i] = str2[0+i/2];
    }
    return answer;
}