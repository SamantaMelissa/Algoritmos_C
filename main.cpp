#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "portuguese");

    int palpite, secreto = 15;
    printf("\n Informe um n�mero para tentar adivinhar o n�mero");
    scanf("%d", &palpite);

    if(palpite == secreto){

        printf("\n Voc� chutou alto");

    }else{
        if(palpite>secreto){
             printf("\n Voc� chutou alto");
        }else{
            printf("\n Voc� chutou baixo");
        }
    }

    printf("\n Obrigado por usar nosso sistema!");

    return 0;
}
