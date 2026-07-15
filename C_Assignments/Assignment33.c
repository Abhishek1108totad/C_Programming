#include <stdio.h>

void func(char *buff){
    printf("You entered: %s", buff);
    int i = 0;
    int word_count = 0;
    int char_count = 0;
    int line_count = 0;
    int in_word = 0;
    while(buff[i] != '\0'){
         char_count++;
        if(buff[i] == '\n')
            line_count++;

        if (buff[i] == ' ' || buff[i] == '\t' || buff[i] == '\n') {
            in_word = 0; // We hit whitespace, so we are outside a word
        } else if (in_word == 0) {
            in_word = 1; // We hit a non-whitespace character after whitespace
             word_count++; // Count the start of a new word
        }
            i++;
    }
    printf("Charcter count = %d \n Word count = %d\n Line count = %d\n",char_count, word_count, line_count);
}
int main() {
    char *buffer;
    char ch = '\0';
    int i = 0;

    printf("Enter a line (Press Ctrl+D to exit):\n");

    // fgets returns NULL on EOF
    while (scanf("%c", &ch) != EOF){
        *(buffer + i++) = ch;
    }
     buffer[i] = '\0'; 

    func(buffer);
    printf("You entered: %s", buffer);
    return 0;
}
