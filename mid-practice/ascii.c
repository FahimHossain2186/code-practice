#include <stdio.h>

int main(){

    for(int i = 97; i < 123; i++){

        printf("%c %d\t", i-32, i-32);
        printf("%c %d\n", i, i);
    }

    return 0;
}