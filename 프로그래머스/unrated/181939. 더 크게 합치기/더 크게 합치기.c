#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int n = 1;
    int c1,c2 = 0;
    while(n<=b)
        n*=10;
    c1 = a*n+b;
    n = 1;
    while(n<=a)
        n*=10;
    c2 = b*n+a;
    if(c1>c2)
        answer = c1;
    else if(c1<c2)
        answer = c2;
    else answer = c1;
    
    return answer;
}