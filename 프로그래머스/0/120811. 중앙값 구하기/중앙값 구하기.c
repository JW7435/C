#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int temp;
    int i = 0;

    for (int j = array_len - 1; j > 0; j--) {
        for (i = 0; i < j; i++) {
            if (array[i] > array[i + 1]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp; } 
        }
    }

    answer = array[array_len/2];
    return answer;
}