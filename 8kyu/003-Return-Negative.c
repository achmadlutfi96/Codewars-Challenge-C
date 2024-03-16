#include<stdio.h>

int makeNegative(int num)
{
  return num>0?-num:num;
  // Alternative
  // return -abs(num);
}

int main(){
    printf("%d", makeNegative(-42));
    return 0;
}