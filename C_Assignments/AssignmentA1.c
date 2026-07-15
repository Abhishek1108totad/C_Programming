#include <stdio.h>

void func(int num){
    int count = 0;
    for(int i=2;i<=num;i++){
        //printf("%d ", i);
        count = 0;
        for(int j=1;j<=i;j++){
            if((i%j) == 0)
                count++;
        }
        if(count <= 2)
            printf("%d ", i);
    }
}

int main(){

    int number = 0;
    printf("Enter the number\n");
    scanf("%d", &number);

    func(number);

    return 0;
}