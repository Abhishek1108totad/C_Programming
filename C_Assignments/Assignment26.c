#include <stdio.h>   
#include <stdint.h>
#include <string.h>

int func(int *array, int size){
    int temp = array[0];
    int second_lar = 0;

    for(int i=0;i<size;i++){
        if(array[i] > temp){
            second_lar = temp;
            temp = array[i];
        }
        if((array[i] > second_lar) && (array[i] != temp)){
            second_lar = array[i];
        }
    }

    return second_lar;
}
     
int main() {    
    uint32_t number = 0, bits = 0;

    printf("Enter the number, bits to shift: \n");
    scanf("%d", &number);
    int arr[number];

    for(int i=0;i<number;i++){
        scanf("%d", &arr[i]);
    }

    printf("%d\n", func(arr, number));
    return 0;
}   