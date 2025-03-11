#include<stdio.h>

int main(){

    int count;

    scanf("%d", &count);

    for (int  i = 0; i < count - 1; i++){
                                            printf ("*");
        for (int j = 0; j <= i-2; j++)      printf (" ");
        if  (i!=0)                          printf ("*");
                                            printf ("\n");  
    }

    for (int i = 0; i < count; i++)         printf ("*");
    
    return 0;
    
}