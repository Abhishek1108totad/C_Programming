#include <stdio.h>
#include <string.h>

char *squeez_str(char strng1[], char strng2[]);

int main(){

    char str1[20] = {'\0'};
    char str2[20] = {'\0'};

    printf("Enter the String 1\n");
    scanf("%[^\n]s", str1);

    printf("Enter the String 2\n");
    scanf(" %[^\n]s",str2);

    //printf("Str1:- %s\nStr2:- %s\n", str1, str2);

    char *ret_str = squeez_str(str1, str2);

    printf("%s\n", ret_str);
    
    return 0;
}

char *squeez_str(char strng1[], char strng2[]){
    int len1 = strlen(strng1);
    int len2 = strlen(strng2);
    int k= 0;

    //printf("%d %d",len1, len2);
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(strng1[i] == strng2[j]){
                k = i;
                while(strng1[k] != '\0'){
                    strng1[k] = strng1[k+1];
                    k++;
                }
                j=0;
            }
        }
    }

    return strng1;
}
