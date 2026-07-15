#include <stdio.h>
//static int third_num;
void func(int fir_num, int sec_num, int num){
    
    if(fir_num <= num){
        printf("%d ", fir_num);
        fir_num += sec_num;
        func(sec_num, fir_num, num);
    }
}

int main(){

    int number = 0;

    printf("Enter the number\n");
    scanf("%d", &number);

    func(0, 1, number);

    return 0;
}