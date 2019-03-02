#include <stdio.h>

int main()
{
    int k, i, numPar;//Declaração das variaveis int
    float multiplo, qtde;//Declaração das variaveis float
    numPar = 0;//Atribuindo valor 0 à variavel
    k = 0;//Atribuindo valor 0 à variavel
    qtde = 0;
    do{
        printf("Digite a quantidade de numeros pares: ");
        scanf("%d", &k);
    }while(k < 1);//Validação para a quantidade de numeros pares não ser negativa

    for(i = 0; i < k; i++){
        numPar = numPar + 2;
        if((numPar % 5)== 0){
            multiplo = multiplo + numPar;
            qtde++;

            printf("%d\n", numPar);
        }//Faz a divisão por 5 e verifica se tem resto 0, caso tenha é um multiplo de 5, e exibe na tela para saber quais foram os numeros pares multiplos de 5
    }
    if(qtde > 0){
        printf("A media dos pares multiplos de 5 e: %.0f", multiplo / qtde);//Exibe na tela a media dos pares multiplos de 5
    }
    else{
        printf("Nao possui pares multiplos de 5!");//Exibe na tela que não foram obtidos pares multiplos de 5
    }
}

