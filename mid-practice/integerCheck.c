/*Read a floating point number from user and check if it has any fractional part (e.g. 4.5, 6.9,...) or not (e.g. 4, 5, ...). 
If it has a fractional part then print “Not an integer”, otherwise print “integer”.*/

#include<stdio.h>

int main(){

    float a; int b;

    printf("Enter Value:  ");
    scanf("%f", &a);

    if(a == (int)a) printf("Integer.\n");
    else printf("Not an Integer.\n");

    return 0;
}