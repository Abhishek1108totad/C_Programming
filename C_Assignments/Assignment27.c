#include <stdio.h>

int func(int *arr, int size){
    int first_lar = arr[0];
    int second_lar = 0;
    int third_lar = 0;

    for(int i=1;i<size;i++){
        if(arr[i] > first_lar){
            third_lar = second_lar;
            second_lar = first_lar;
            first_lar = arr[i];
        }
        if((arr[i] > second_lar) && (arr[i] != first_lar)){
            third_lar = second_lar;
            second_lar = arr[i];
        }
        if((arr[i] > third_lar) && (arr[i] != second_lar) && (arr[i] != first_lar))
            third_lar = arr[i];
    }

    return third_lar;
}

int main(){

    int size = 0;

    printf("Enter the size of array\n");
    scanf("%d", &size);

    int array[size];
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++){
        scanf("%d", &array[i]);
    }

    printf("Third largest element in array : %d", func(array, size));
}