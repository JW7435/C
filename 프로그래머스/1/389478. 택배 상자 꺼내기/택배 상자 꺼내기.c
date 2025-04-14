#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int w, int num) {
    int answer=0;
    
    int rows = n%w == 0 ? n/w : n/w+1;
    int row = num%w == 0 ? num/w : num/w+1;
    bool top = n%w == 0 ? false : true;
    int numlo = (row%2) == 0 ? (w+1-num%w)%w : num%w;
    int tople, topri;
    if(numlo == 0)
        numlo += w;
    if(top == true) {
        if(rows%2 == 0) {
            tople = (w+1-n%w)%w;
            topri = w;
        } else {
            tople = 1;
            topri = n%w;
        }
        if(numlo >= tople && numlo <= topri)
            answer = rows - row + 1;
        else
            answer = rows - row;
    } else {answer = rows - row + 1;}
   
    return answer;
}


