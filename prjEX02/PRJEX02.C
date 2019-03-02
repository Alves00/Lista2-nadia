#include <stdio.h>

int main()
{
    int k, i, a, b, c, d;
    k = 0;
    do{
        printf("Digite a quantidade de numeros a serem exibidos: ");
        scanf("%d", &k);
    }while(k < 1);

    a = 0;
    b = 0;

    for(i = 1 ;i <= k; i++){

        printf("a = %d/", i*2);
        printf("%d \n", i*5);
        b = b + 2;
        c = b * b;

        d = 8 * i;

        if((c%d) == 0){
            printf("b = %d\n", c / d);
        }
        else{
            printf("b = %d/", c);
            printf("%d \n", d);
        }
    }
}
