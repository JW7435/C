#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int coo = 0;
    int odd = 0;
    int even = 0;
    
    for(int i=0;i<num_list_len;i++) {
        if(num_list[i]%2==1)
            coo++; }
    int coe = num_list_len - coo;

    for(int i=0;i<num_list_len;i++) {
        if(num_list[i]%2==1) {
            odd+=num_list[i]*pow(10,coo-1);
            coo--; }
        else {
            even+=num_list[i]*pow(10,coe-1);
            coe--; } }
        
    answer = odd + even;

    return answer;
}