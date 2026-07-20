/*Incomplete Plz correct the following using the LMS
To take 8 consecutive bytes in memory. Provide a menu to manipulate or display the value of variable of type t (input) & indexed at i (i/p)
Description:

Allocate 8 consecutive bytes in memory
Provide a display menu
1. Add element
2. Remove element
3. Display element
4. Exit from the program
It should allow to add elements of different data types which data type size is less than or equal to 8
Pr-requisites:-

Pointers
Dynamic memory allocation
Objective: -

To understand the concept of
Dynamic memory allocation
Note:- You need to submit the assignment. It's not auto-evaluation. Evaluation will be done by Mentors.
Inputs: -
            Integers N1 and N2

Sample execution: -
Test Case 1:
user@emertxe] ./mem_manager
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 8
#define INT_SIZE 4

int main(){

    /*int var = 1234567890;

    char* byte_ptr = (char *)&var;

    // You can now access individual bytes like an array
    printf("Byte 0: %02X\n", (unsigned char)byte_ptr[0]);
    printf("Byte 1: %02X\n", (unsigned char)byte_ptr[1]);
    printf("Byte 2: %02X\n", (unsigned char)byte_ptr[2]);
    printf("Byte 3: %02X\n", (unsigned char)byte_ptr[3]);
    */

    char* byte_ptr = (char *) malloc(SIZE * sizeof(char));

    if(byte_ptr == NULL){
        printf("Mry not allocated\n");
        return 1;
    }

    for(;;){
        printf("\nMenu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nChoice :- ");

        int choice = 0;
        static int array_index = 0;
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the type you have to insert:\n1. char\n2. int\n3. float\n4. double\nChoice :- ");
                int datatype_choice = 0;
                scanf("%d", &datatype_choice);
                if(datatype_choice <= ((SIZE -1) - array_index)){
                    switch (datatype_choice)
                    {
                        case  1:
                            char array_char = '\0';
                            printf("Enter the Character to store in the array\nCharacter :- ");
                            scanf(" %c", &array_char);
                            byte_ptr[array_index++] = array_char;
                        break;
                        case 2:
                            printf("Enter the Integer value to store\n");
                            int array_int = 0;
                            scanf("%d",&array_int);

                            char* IntToChar = (char*)&array_int;

                            for(int i = 0; i < INT_SIZE;i++){
                                *(byte_ptr + array_index++) = *(IntToChar + i); 
                            }
                            

                        break;
                        case 3:
                            printf("Float\n");
                        break;
                        case 4:
                            printf("Double\n");
                        break;  
                        default:
                            break;
                    }
                }
                else{
                    printf("/**************The Entered datatype is not matching with the allocated array size*********/\n The Remaining Size of the array is %d", ((SIZE -1) - array_index));
                }
            break;
            case 2:
                printf("Remove Elements\n");
            break;
            case 3:
                printf("Display Elements\n");
                for(int i = 0; i < SIZE; i++){
                    printf("%c", byte_ptr[i]);
                }
            break;
            case 4:
                printf("Exit Program\n");
                exit(0);
            break;
            default :
                printf("Nothing here\n");
            break;
        }
    }
    return 0;
}