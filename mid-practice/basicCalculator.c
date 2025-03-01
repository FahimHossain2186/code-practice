/*Use switch case to make a simple calculator that can add, subtract, multiply or divide two input numbers. 
The operator (+ ,   -  ,  *  or   /) should also be read from user.
Sample Input/Output:
Enter two numbers: 4.5 2.9
Enter operator: +
4.5 + 2.9 = 7.4
*/

#include<stdio.h>

int main(){

    float x, y; char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("Enter operator: ");
    scanf(" %c", &operator);

    switch (operator){
        case '+': printf("%.2f %c %.2f = %.2f\n", x, operator, y, x+y); break;
        case '-': printf("%.2f %c %.2f = %.2f\n", x, operator, y, x-y); break;
        case '*': printf("%.2f %c %.2f = %.2f\n", x, operator, y, x*y); break;
        case '/': printf("%.2f %c %.2f = %.2f\n", x, operator, y, x/y); break;
        default : printf("Invalid input.\n");                           break;
    }

    return 0;
}