#include <stdio.h>
 
int main() {
 
    int a, b, c;
    
    scanf("%i %i %i", &a, &b, &c);
    
    if(a>b){
        if(a>c){
            printf("%i eh o maior\n", a);
        }else{
            printf("%i eh o maior\n", c);
        }
    }else if(b>c){
        printf("%i eh o maior\n", b);
    }else{
        printf("%i eh o maior\n", c);
    }
 
    return 0;
}