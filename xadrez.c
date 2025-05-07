#include <stdio.h>


int main(){

    // Simula a movimentação da torre cinco casas para frente;
    printf("\nMovimento da Torre:\n");
    for(int i=1; i<=5;i++){
        printf("%d direita.\n", i);
    }


    // Simula a movimentação do bispo cinco casas em diagonal(para cima e a direita);
    printf("\nMovimento do Bispo:\n");
    int bispo = 1;
    do
    {
        printf("%d Cima, Direita.\n", bispo);
        bispo++;
    }while(bispo<=5);

    // Simula a movimentação da rainha 8 casas para a esquerda;
    printf("\nMovimento da Rainha:\n");
    int rainha = 1;
    while(rainha<=8){
        printf("%d esquerda.\n", rainha);
        rainha++;
    }

    // Evita a janela fechar quando o programa é executado no windows;
    getchar();
    getchar();

    // retorna 0 caso o programa execute corretamente;
    return 0;
}