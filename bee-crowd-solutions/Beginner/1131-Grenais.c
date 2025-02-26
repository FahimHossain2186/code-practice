#include <stdio.h>

void func()
{
    int a = 1, x, y, p = 0, q = 0, r = 0;

    while (a==1) {
        scanf("%d %d", &x, &y);
        if(x>y)
            p++;
        else if(x<y)
            q++;
        else    
            r++;    

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &a);

        while(a!=1&&a!=2){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &a);
        }

        if (a == 1) {
            continue;;  // Recursively call the function
        }
    }
    
        printf("%d grenais\n", p+q+r);
        printf("Inter:%d\n", p);
        printf("Gremio:%d\n", q);
        printf("Empates:%d\n", r);
        if(p>q)
            printf("Inter venceu mais\n");
        else if(p<q)
            printf("Gremio venceu mais\n");
        else   
            printf("Não houve vencedor\n");
    
}

int main()
{
    func();
    return 0;
}