/*Write a C program to convert a given Binary number to its Decimal equivalent.
Write a C program to convert a given decimal number to its binary equivalent.*/

#include<stdio.h>
#include<math.h>

int decToBin(int x){
    int temp, i = 0, dec = 0;

    while(x!=0){
        temp = x % 2;
        x /= 2;
        dec += temp * pow(10, i);
        i++;
    }

    return dec;
}

int binToDec(int x){
    int temp, i = 0, bin = 0;
    
    while(x!=0){
        temp = x % 10;
        x/=10;
        bin += temp * pow(2, i);
        i++;
    }

    return bin;
    
}

int main(){

    int dec, bin;

    printf("Enter Decimal & Binary number you want to convert:  ");
    scanf("%d %d", &dec, &bin);

    printf("Binary Equivalet of %d: %d\n", dec, decToBin(dec));
    printf("Decimal Equivalent of %d: %d\n", bin, binToDec(bin));

    return 0;
}