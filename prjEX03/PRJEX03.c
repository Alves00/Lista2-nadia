#include <stdio.h>

int main()
{
    int k, i, soma;//Declara��o das variaveis
    soma = 0;//Atribuindo valor 0 � variavel
    k = 0;//Atribuindo valor 0 � variavel
    do{
        printf("Digite a quantidade de pessoas: ");
        scanf("%d", &k);
    }while(k < 1);//Valida��o para a quantidade de pessoas n�o ser negativa

    int n[k];//Declara��o da variavel array para inser��o das idades
    for(i = 0; i < k; i++){
        do{
            printf("Digite a idade da pessoa numero %d: ", i+1);
            scanf("%d", &n[i]);
            if(n[i] < 0){
                printf("A idade deve ser maior ou igual a zero! Digite novamente: \n");
            }//Valida se a idade � menor que 0 para mandar a mensagem na tela
        }while(n[i] < 0); // Loop para inserir idade maior que 0
        soma = soma + n[i]; //Soma as idades
    }
    printf("A soma das idades e: %d anos", soma);//Exibe na tela a soma das idades
}

