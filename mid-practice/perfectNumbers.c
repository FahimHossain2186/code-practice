/*Write a C program to find the 'Perfect' numbers within a given number of ranges. 
A perfect number is a positive integer that is equal to the sum of all its positive divisors, excluding the number itself. 
Input data: 1 50 Expected Output: The Perfect numbers within the given range: 6 28*/

#include<stdio.h>
#include<math.h>

void check(int i){

    int sum = 0;

    for(int j = 1; j<i; j++){
        if(i%j == 0) sum += j;
    }

    if(i == sum) printf("%d ", i);

}

int main(){

    int x, y;

    scanf("%d %d", &x, &y);

    for(int i = x; i<y; i++){
        check(i);
    }

    printf("\n");
    return 0;
}