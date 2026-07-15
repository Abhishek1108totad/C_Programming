#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func(char *str);

int main(){
    char ch = '\0';
    int i = 0;
    char *str_buf = malloc(50 * sizeof(char));

    if(str_buf == NULL){
        printf("Mry not alloctaed\n");
        return 1;
    }

    while(scanf("%c", &ch) != EOF)
        str_buf[i++] = ch;

        str_buf[i] = '\0';

        int ret_num = func(str_buf);

        printf("Return value : %d\n", ret_num);

        return 0;
}

int func(char *str){
    int i = 0;
    int count = 0;
    while(str[i++] != '\0')
    count++;
    return count;
}