#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[]){
    if(argc == 1 || argc > 2){
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++){
        if(argv[1][i] < 64){
            return 1;
        }
    }
    int keynum;
    string plaintext = get_string("PLaintext: ");
    char letter;
    string key = argv[1];
    char final[strlen(plaintext)];
    for(int x = 0; x < strlen(plaintext); x++){
        letter = plaintext[x];
        if(key[x % strlen(key)] > 96){
        keynum = (int) key[x % strlen(key)] - 97;
        }
        else if(key[x % strlen(key)] < 91){
        keynum = (int) key[x % strlen(key)] - 65;
        printf("%i",keynum);
        }
        if(letter > 63){
            if(letter > 64 && (letter + keynum) < 91){
                final[x] = letter + keynum;
            }
            else if(letter < 91){
                while(letter + keynum > 91){
                    keynum = keynum - 26;
                }
            }
            final[x] = letter + keynum;
            if(letter > 96 && (letter + keynum) < 123){
                final[x] = letter + keynum;
            }
            else if(letter > 96){
                while(letter + keynum > 123){
                    keynum = keynum - 26;
                }
                final[x] = letter + keynum;
            }
        }
        else{
            final[x] = letter;
        }
    }
    printf("ciphertext: ");
    for(int i = 0; i < strlen(plaintext); i++){
       printf("%c",final[i]);
    }
    printf("\n");
    return 0;
}