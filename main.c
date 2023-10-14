#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){


    FILE *file_to_read = fopen("sometext.txt","r"); // fopen return pointer associated to file name "sometext.text"
    FILE *file_to_write = fopen("newtext.txt","w");

    if(file_to_read == NULL || file_to_write == NULL){
        printf("One file wouldn't open ! \n");
        return -1;
            }
    char c;
    while ((c = fgetc(file_to_read))!= EOF){ // verify if the file End
        if(c == '.'){ // if the char is '.' replace to '!'
            c = '!';
        }
        fputc(c, file_to_write); // change the char in the "file_to_write"
    }

    fclose(file_to_read);
    fclose(file_to_write);

}