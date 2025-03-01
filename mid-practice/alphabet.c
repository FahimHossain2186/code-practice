/*Write a program to display all the letters of the alphabet (a-z). 
Use two for loops: the 1st one will print all letters in small letters and the 2nd one will print them in capital letters.
Example output:	a b c d ……… z
		        A B C D ……… Z */

#include <stdio.h>

int main(){

    for(char a = 'a'; a<123; a++) printf("%c ", a);
    printf("\n");
    for(char A = 'A'; A<91; A++) printf("%c ", A);

    return 0;
}