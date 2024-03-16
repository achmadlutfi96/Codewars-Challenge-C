#include<stdio.h>

#include <stddef.h>

int positive_sum(const int *values, size_t count);

int main(){
    const int values[] = { 1,-2,3,4,5 };
    printf("%d", positive_sum(values, 5));
    return 0;
}

int positive_sum(const int *values, size_t count){
    int result = 0;
    for(size_t i = 0; i < count; i++){
        if (*values > 0 ) {result+=*values; }
        values++; 
    }
    return result;
}