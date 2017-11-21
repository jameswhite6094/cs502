#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[]){
    if(argc == 1){
        return 1;
    }
    int key = atoi(argv[1]);
    key = key % 26;
    string plaintext = get_string("PLaintext: ");
    char letter;
    char final[strlen(plaintext)];
    for(int i = 0; i < strlen(plaintext); i++){
        letter = plaintext[i];
        if(letter < 91){
            if(letter + key < 91){
                letter = letter + key;
                final[i] = letter;
        }
            else{
                while(letter + key > 91){
                key = key - 26;
            }
            final[i] = letter + key;
        }
    }
        if(letter < 123 && letter > 91){
            if(letter + key < 122){
                letter = letter + key;
                final[i] = letter;
            }
            else{
                while(letter + key > 123){
                key = key - 26;
                }
                 final[i] = letter + key;
            }
        }
    }
   printf("ciphertext: ");
   for(int i = 0; i < strlen(plaintext); i++){
       printf("%c",final[i]);
   }
   printf("\n");
}