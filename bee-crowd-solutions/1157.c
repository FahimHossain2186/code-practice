/*Read an integer N and compute all its divisors.

Input
The input file contains an integer value.

Output
Write all positive divisors of N, one value per line.

Input Sample	
6

Output Sample
1
2
3
6*/

#include<stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)         if(!(n % i))        printf("%d\n", i);

    return 0;
}