#include <stdio.h>

int main()
{
    int k, i, soma;//Declaração das variaveis
    soma = 0;//Atribuindo valor 0 à variavel
    k = 0;//Atribuindo valor 0 à variavel
    do{
        printf("Digite a quantidade de pessoas: ");
        scanf("%d", &k);
    }while(k < 1);//Validação para a quantidade de pessoas não ser negativa

    int n[k];//Declaração da variavel array para inserção das idades
    for(i = 0; i < k; i++){
        do{
            printf("Digite a idade da pessoa numero %d: ", i+1);
            scanf("%d", &n[i]);
            if(n[i] < 0){
                printf("A idade deve ser maior ou igual a zero! Digite novamente: \n");
            }//Valida se a idade é menor que 0 para mandar a mensagem na tela
        }while(n[i] < 0); // Loop para inserir idade maior que 0
        soma = soma + n[i]; //Soma as idades
    }
    printf("A soma das idades e: %d anos", soma);//Exibe na tela a soma das idades
}

