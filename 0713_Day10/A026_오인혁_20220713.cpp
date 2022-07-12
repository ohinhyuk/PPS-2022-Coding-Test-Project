#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int x_copy = x;
    
    int div = 0;
    
    while(x > 0){
        div += x % 10;
        x /= 10;
    }
    
    if(x_copy % div ==0) return true;
    
    return false;
}