#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "portuguese");

    int palpite, secreto = 15;
    printf("\n Informe um número para tentar adivinhar o número");
    scanf("%d", &palpite);

    if(palpite == secreto){

        printf("\n Você chutou alto");

    }else{
        if(palpite>secreto){
             printf("\n Você chutou alto");
        }else{
            printf("\n Você chutou baixo");
        }
    }

    printf("\n Obrigado por usar nosso sistema!");

    return 0;
}
