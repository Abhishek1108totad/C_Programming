#include<stdio.h>

void func(int *array, int size){
    int count = 0;
    for(int i=0;i<size;i++){
        count = 0;
        for(int j=i;j<size;j++){
            if(array[i] == array[j])
                count++;
            
            if(count > 1){
                printf("%d",array[j]);
                array[j] = 0;
                count--;
            }
        }
    }
}

int main(){
    int size = 0;

    printf("Enter the size of the array \n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++)
        scanf("%d", &arr[i]);
    
    func(arr, size);

    printf("After removing the duplicate array elements\n");

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            continue;
        }
        
        printf("%d ", arr[i]);
    }
    printf("\n");
}