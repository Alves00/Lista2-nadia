#include <stdio.h>

main(){
    int x, i;
    float prod;
    x = 0;
    prod = 1;
    do{
        printf("Digite a quantidade de numeros a serem digitados: ");
        scanf("%d", &x);
        if(x <= 0){
            printf("A quantidade de numeros a serem digitados deve ser maior que 0! \n");
        }
    }while(x <= 0);

    int h[x];

    for(i = 0; i < x; i++){
        do{
            printf("Digite um valor: ");
            scanf("%d", &h[i]);
            if(h[i] < 15){
                printf("O valor digitado deve ser maior ou igual a 15! \n");
            }
        }while(h[i] < 15);
        prod = prod * h[i];
    }
    printf("O produto dos valores digitados e: %.0f", prod);
}
