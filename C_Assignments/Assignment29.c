#include <stdio.h>

int func(int num){
    static int sum = 1;
    if(num >= 2)
        func(num - 1);
    return (sum *= num);
}

int main(){
    int number = 0;

    printf("Enter the number\n");
    scanf("%d", &number);

    printf("%d", func(number));

    return 0;
}