#include <stdio.h>

int main()
{
    int k, i, a, b;
    k = 0;
    do{
        printf("Digite a quantidade de numeros a serem exibidos: ");
        scanf("%d", &k);
    }while(k < 1);

    a = 0;
    b = 0;

    for(i = 1 ;i <= k; i++){
        a = a + 3;
        b = b + 4;
        printf("a = %d \n", a);
        printf("b = 1/%d \n", b);
    }
}
