#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    if(a!=b && b!=c && a!=c)
        answer = a+b+c;
    
    if((a==b && b!=c)||(b==c && a!=b)||(a==c && b!=a))
        answer = (a+b+c)*(a*a+b*b+c*c);
    
    if(a==b && b==c)
        answer = (a+b+c)*(a*a+b*b+c*c)*(a*a*a+b*b*b+c*c*c);
    
    return answer;
}