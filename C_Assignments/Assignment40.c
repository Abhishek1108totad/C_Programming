#include<stdio.h>
#include <string.h>

int str_chr(char delim[], char chractr);
char *str_tok(char strng[], char dlmnatr[]);

int main(){

    char str[50] = {'\0'};
    char delim[10] = {'\0'};

    printf("Enter the String\n");
    scanf("%[^\n]s", str);

    printf("Enter the deliminator\n");
    scanf("%s",delim);

    char *token = str_tok(str, delim);

    while(token){
        printf("%s",token);
        token = str_tok(NULL, delim);
    }
    printf("\n");
    return 0;
}

char *str_tok(char strng[], char dlmnatr[]){
    static char *next_token = NULL;

    if(strng != NULL)
        next_token = strng;

    if((next_token == NULL) && (*next_token == '\0'))
        return NULL;

    while((*next_token == '\0') && (str_chr(dlmnatr, *next_token) != 0))
        next_token++;

    if(*next_token == '\0')
        return NULL;

    char *start_token = next_token;

    while(*next_token != '\0'){
        if(str_chr(dlmnatr, *next_token) != 0){
            *next_token = '\0';
            next_token++;
            return start_token;
        }
        next_token++;
    }

    return start_token;
}

int str_chr(char delim[], char chractr){

    int len = strlen(delim);
    for(int i=0;i<len;i++){
        if(delim[i] == chractr){
            return 1;
        }
        return 0;
    }
}