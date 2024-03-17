#include <stdbool.h>
#include <stdio.h>

const char *bool_to_word (bool value)
{
// you can return a static/global string or a string literal
  return value ? "Yes" : "No";
}

int main(){
    printf(bool_to_word(true));
    return 0;
}