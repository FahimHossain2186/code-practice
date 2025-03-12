/*Read an integer N that is the number of test cases that follows. Each test case contains two integers X and Y. 
Print one output line for each test case that is the sum of Y odd numbers from X including it if is the case. For example:
for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13
for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13

Input
The first line of the input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

Output
Print the sum of all consecutive odd numbers from X.

Input Sample	
2
4 3
11 2

Output Sample
21
24*/

#include <stdio.h>

int main(){

    int testCase, initial, oddCount, sum;

    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++){

        sum = 0;

        scanf("%d %d", &initial, &oddCount);

        if(!(initial % 2)) initial++;

        for(int j = 0; j < oddCount; j++){
            sum += initial;
            initial += 2;
        }

        printf("%d\n", sum);

    }

    return 0;

}