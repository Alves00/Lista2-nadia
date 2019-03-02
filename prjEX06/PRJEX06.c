#include <stdio.h>

main(){

    int k, i, qtdeMult;
    qtdeMult = 0;
    k = 0;
    do{
        printf("Digite a quantidade de numeros a serem recebidos: ");
        scanf("%d", &k);
        if(k<=0){
            printf("A quantidade de numeros deve ser maior que zero! \n");
        }
    }while(k <= 0);

    int Num[k];

    for(i = 0; i < k ; i++){
        do{
            printf("Digite um numero positivo: ");
            scanf("%d", &Num[i]);
            if(Num[i]<= 0){
                printf("O numero deve ser positivo! \n");
            }
        }while(Num[i]<= 0);

        if((Num[i]%7) == 0){
            qtdeMult++;
        }
    }

    if(qtdeMult > 0){
        printf("A quantidade de multiplos de 7 foi: %d", qtdeMult);
    }
    else{
        printf("Nao tiveram multiplos de 7!");
    }
}
