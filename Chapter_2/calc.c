#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]){
    if(argc != 1){
        float x = atof(argv[1]);
        float y = atof(argv[3]);
        int q;
        float z;
        if(strcmp(argv[2], "+") == 0){
            printf("%f\n", x + y);
        }
        else if(strcmp(argv[2], "-") == 0){
            printf("%f\n", x - y);
        }
        else if(strcmp(argv[2], "x") == 0){
            printf("%f\n", x * y);
        }
        else if(strcmp(argv[2], "/") == 0){
            printf("%f\n", x / y);
        }
        else if(strcmp(argv[2], "%") == 0){
            q = (int) (x / y);
            z = x - (y * q);
            printf("%f\n", z);
        }
        else{
            return 1;
        }
        return 0;
    }
    return 1;
}