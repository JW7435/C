#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    char* answer = (char*)malloc(strlen(my_string)+1);
    for (int i = 0; i <= strlen(my_string); i++)
      answer[i] = my_string[i];
    for (int i = s; i <= s+strlen(overwrite_string) - 1; i++)
    answer[i] = overwrite_string[i - s];
   
    return answer;
}