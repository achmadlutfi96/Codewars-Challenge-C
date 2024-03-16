#include<stdio.h>

const char* even_or_odd(int number)
{
  // return a statically allocated string,
  // for example a string literal
  return number%2 == 0 ? "Even": "Odd";
}

int main(){
    printf("%s", even_or_odd(1));
    return 0;
}