#include <stdio.h>

/*
    Faça um programa que receba a idade de um nadador e mostre a sua categoria usando as regras a seguir:

    Infantil     5 a 7
    Juvenil      8 a 10
    Adolescente 11 a 15
    Adulto      16 a 30
    Mestre      acima de 30
*/

int main()
{
    int idade;

    scanf("%d", &idade);
    if((5<= idade) && (idade <=7)){
        printf("Infantil");
    }else if((8 <= idade) && (idade <= 10)){
        printf("Juvenil");
    }else if((11 <= idade) && (idade <= 15)){
        printf("Adolescente");
    }else if((16 <= idade) && (idade <= 30)){
        printf("Adulto");
    }else if(idade > 30){
        printf("Mestre");
    }else{
        printf("Entrada invalida");
    }

    return 0;
}
