#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i, qtdeZero, qtdePn;//Declara��o das variaveis int
    k = 0;//Atribuindo valor 0 � variavel
    qtdeZero = 0;
    qtdePn = 0;
    do{
        printf("Digite a quantidade de numeros a serem digitados: ");
        scanf("%d", &k);
    }while(k < 1);//Valida��o para a quantidade de numeros a serem digitados n�o ser negativa

    int Num[k];//Declara��o da variavel array

    for(i = 0; i < k; i++){
        printf("Digite um numero: ");
        scanf("%d", &Num[i]);
        if(Num[i] != 0){
            if(Num[i]%2 == 0){ //valida��o se � par
                if(Num[i] < 0){ //Valida��o se � negativo
                    qtdePn++;
                }
            }
        }
        else{
            qtdeZero++;
        }
    }
    if(qtdeZero > 0){
        printf("A quantidade de Zeros digitados foi: %d \n", qtdeZero);//Exibe na tela a quantidade de Zeros digitados
    }
    else{
        printf("Nao digitaram zero \n");//Exibe na tela a mensagem de erro
    }
    if(qtdePn > 0){
        printf("A quantidade de Pares Negativos foi: %d", qtdePn);//Exibe na tela a quantidade de Pares Negativos
    }
    else{
        printf("Nao digitaram pares negativos");//Exibe na tela a mensagem de erro
    }
}

