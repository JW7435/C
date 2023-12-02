#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* stk = (int*)malloc(100000);
    int cts = 0;
    int i = 0;
    stk[0] = arr[0];
    i++;
    cts++;
    for(i;i<arr_len;i++) {
        if(stk[cts-1] < arr[i]) {
            stk[cts] = arr[i];
            cts++; }
        else {
            stk[cts-1] = stk[cts];
            cts--;
            i--;
        }
        
    }
    return stk;
}