#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* func(char *string){
    int i=0, j=0;
    // Allocate enough memory for the new string (same size as input to be safe)
    char *func_str = malloc(strlen(string) + 1);
    if (func_str == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    while(string[i] != '\0'){
        if (string[i] == '\n' || string[i] == '\t') {
            string[i] = ' ';
        }
        if (string[i] == ' ') {
            while (string[i + 1] == ' ' || string[i + 1] == '\n' || string[i + 1] == '\t') {
                i++;
            }
        }
        func_str[j++] = string[i++];    
    }
    func_str[j] = '\0';

    return func_str;    
}

int main(){
    char *str_buffer = malloc(50 * sizeof(char));
    char ch = '\0';
    int i = 0;

    while(scanf("%c", &ch) != EOF)
        str_buffer[i++] = ch;

        str_buffer[i] = '\0';

    char *mod_str = func(str_buffer);

    printf("Modified string :- %s\n", mod_str);

    free(mod_str);
    free(str_buffer);
    return 0;
}