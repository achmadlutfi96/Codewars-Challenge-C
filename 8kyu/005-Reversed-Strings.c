#include<stdio.h>
#include<string.h>

char *strrev (char *string)
{
    // char *str = string;
    // int i = 0;
    // int j = strlen(str)-1;
 
    // // reversing string
    // while (i < j) {
    //     char c = str[i];
    //     str[i] = str[j];
    //     str[j] = c;
    //     i++;
    //     j--;
    // }
    
    // return str; // reverse the string in place and return it

    // Alternative
    char *str = string;
    for(int i = 0; i < (int)strlen(str)/2; i++){
        char c = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = c;
    }
    return str; // reverse the string in place and return it
}

int main(){
    char *str = "world";
    printf("%s", strrev(str));
    return 0;
}