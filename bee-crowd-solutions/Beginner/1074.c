#include <stdio.h>

int main() {
    int a, x;

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        scanf("%d", &x);
        if (x == 0){
            printf("NULL\n");
            continue;
        } 
        
        switch (x % 2)
        {
        case 0:
            printf("EVEN ");
            break;
        default:
            printf("ODD ");
        }

        switch (x>0)
        {
        case 1:
            printf("POSITIVE\n");
            break;
        default:
            printf("NEGATIVE\n");
        }
    }
    return 0;
}
