// #include <stdio.h>
// int func(char str[]);

// int main(){
//     char ch[30] = {'\0'};

//     printf("Enter the string\n");
//     scanf("%[^\n]s", ch);

//     //printf("%s",ch);

//     int ret_val = func(ch);

//     printf("%d", ret_val);
// }

// int func(char str[]){
//     printf("%s",str);
//     int count = 0;
//     for(int i=0;i<26;i++){
//         int j = 0;
//             while(str[j] != '\0'){
//                 if(('a' + i) == str[j]){
//                     count++;
//                     //continue;
//                 }
//                 j++;
//             }
//     }
//     return count;
// }

#include <stdio.h>
#include <stdbool.h>

int func(char str[]);

int main(){
    char ch[26] = {'\0'};

    printf("Enter the string\n");

    scanf("%[^\n]", ch);

    
    int ret_val = func(ch);

    printf("%d\n",ret_val);
}

int func(char str[]){
    int i = 0;
    int count = 0;
    int index = 0;
    bool alphabet[26]= {false};
        while (str[i] != '\0')
        {
            char c = str[i];
            if((str[i] >= 'a') && (str[i] <= 'z')){
                index = c - 'a';

                if(!alphabet[index]){
                    alphabet[index] = true;
                    count++;
                }
            }
            i++;
        }  
        return count;
}