#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *arr_str, int start, int end);

int main(){

    char ch = '\0';
    int i = 0;
    char *str = malloc(20 * sizeof(char));
    if(str == NULL){
        perror("Mry not allocated\n");
        return 1;
    }

    while(scanf("%c",&ch) != EOF)
        str[i++] = ch;

        int end = strlen(str);
        int start = 0;

        //printf("%s\n %d %d", str, start, end);
        func(str, start, end-1);
        printf("%s", str);
    return 0;
}

void func(char *arr_str, int start, int end){

    if(start < end){
        char temp = arr_str[start];
        arr_str[start] = arr_str[end];
        arr_str[end] = temp;
        start++;
        end--;
        func(arr_str, start, end);
    }       
}