#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//  return a dynamically allocated C-string
//  this output will be freed by the tester

char *number_to_string(int number) {

    //  <----  hajime!
    // char* str;
    // itoa(number, str, sizeof(number));
    // return str;

    // char str[1024];
    // char* ntos;
    // sprintf(str, "%d", number);
    // strcpy(ntos, str);
    // return ntos;
    
    // char *s;
    // asprintf(&s, "%d", number);
    // return s;

    size_t bufferLength = snprintf(NULL, 0, "%d", number); //Find the length of the string conversion
    char* buffer = malloc(bufferLength + 1); //dynamically allocate the string
    
    snprintf(buffer, bufferLength + 1, "%d", number); //populate the string
    
    return buffer; //return the string
}

int main(){
    printf("%s",number_to_string(1));
    return 0;
}