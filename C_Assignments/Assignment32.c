#include <stdio.h>

void func(int *arr, int size){
    int sec_small = arr[0];
    int small = arr[0];
    int large = arr[0];

    printf("\nArray elements Before modifiaction :-");
    for (int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }

     printf("\nArray elements during modifiaction :- ");
        for(int j = 0;j<size;j++){
            if(arr[j] > large)
                large = arr[j];
            if(arr[j] < small)
                small = arr[j];
        }
            printf("%d ", small);
            


    for(int i=1;i<size;i++){
        sec_small = large;
        for(int j = 0;j<size;j++){
            if((arr[j] < sec_small) && (arr[j] > small))
            sec_small = arr[j];   
        }
        small = sec_small;
        printf("%d ", small);
    }

    printf("\nArray elements after modifiaction :-");
    for (int i = 0;i<size;i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int size = 0;

    printf("Enter the size of array\n");
    scanf("%d", &size);

    int array[size];

    printf("Enter the array elements\n");
    for (int i = 0;i<size;i++){
        scanf("%d", &array[i]);
    }

    func(array, size);
    printf("\n");

    return 0;
}