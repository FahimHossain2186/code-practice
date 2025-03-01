#include<stdio.h>

int palindrome(int x){

    int y=0, temp = x;

    while(temp != 0){
        y = y * 10 + temp % 10;
        temp /= 10;
    }
    
    if(x == y) return 1;
    else return 0;
}

int main(){

    int x, y;

    scanf("%d", &x);

    y = palindrome(x);

    if(y==1) printf("Palindrome\n");
    else printf("Not Palindrome\n");

}