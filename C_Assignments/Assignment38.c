#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *arr_str);

int main(){
    int i= 0;
    char *str_arr = malloc(20 * sizeof(char));

    if(str_arr == NULL){
        printf("mry not allocated\n");
        return 1;
    }

    char ch = '\0';

    while(scanf("%c", &ch) != EOF)
        str_arr[i++] = ch;
    func(str_arr);

    printf("%s\n", str_arr);

    return 0;
}

void func(char arr_str[]){
    int str_len = strlen(arr_str);

    int start = 0;
    int end = str_len-1;
    
    while(start < end){
        char temp = arr_str[start];
        arr_str[start] = arr_str[end];
        arr_str[end] = temp;
        start++;
        end--;
    }
    
}