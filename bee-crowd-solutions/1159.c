/*The program must read an integer X indefinite times (stop when X=0). 
For each X, print the sum of five consecutive even numbers from X, including it if X is even. 
If the input number is 4, for example, the output must be 40, that is the result of the operation:  4+6+8+10+12. 
If the input number is 11, for example, the output must be 80, that is the result of                12+14+16+18+20.

Input
The input file contains many integer numbers. The last one is zero.

Output
Print the output according to the example below.

Input Sample	
4
11
0

Output Sample
40
80*/

#include <stdio.h>

int main(){

    int initial, sum;

    while(1){

        sum = 0;

        scanf("%d", &initial);

        if (!(initial)) break;

        if((initial % 2)) initial++;

        for(int i = 0; i < 5; i++){

            sum += initial;
            initial += 2;
        }

        printf("%d\n", sum);
    }

    return 0;

}