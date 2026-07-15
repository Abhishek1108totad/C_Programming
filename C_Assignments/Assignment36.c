#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h> // Required for INT_MAX and INT_MIN

int func(char *string);

int main(){

    char str[10];

    printf("Enter the numeric string\n");
    scanf("%[^\n]s", str);

    int ret_num = func(str);
    printf("%d", ret_num);
    printf("\n");
    return 0;
}

int func(char *str_arr){
    int i = 0;
    int result = 0;
    int sign = 1;
    
    if((str_arr[i] == '+') || (str_arr[i] == '-')){
        if(str_arr[i] == '-'){
            sign = -1;
        }
        i++;
    }
        
    while((str_arr[i] >= '0') && (str_arr[i] <= '9')){
        result = (result * 10)+(str_arr[i] - '0');

        // Check for integer overflow/underflow
        if (sign == 1 && result > INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && -result < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }

    return sign * result;
}