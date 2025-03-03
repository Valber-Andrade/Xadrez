#include <stdio.h> //Incluindo a biblioteca

void moverBispo(int casas) {
    if (casas > 0)
    {
        moverBispo(casas -1);
        printf("Bispo, %d casa para Direita, Cima\n", casas);        
    }
}

void moverTorre(int casas) {
    if (casas > 0)
    {
        moverTorre(casas -1);
        printf("torre, %d casa para Direita\n", casas);        
    }
}

void moverRainha(int casas) {
    if (casas > 0)
    {
        moverRainha(casas -1);
        printf("Rainha, %d casa para Esquerda\n", casas); 

    }
}
int main() {
    //Adicionando as variaveis de incremento
    int cavalo, i;
    int movimentoEmL = 1; //Variavel para a movimentação em 'L'

    printf("O Bispo está se movendo na direção: \n"); //Printf para ilustrar a movimentação do Bispo
    moverBispo(5);
    
    printf("\nA Torre está se movendo na direção: \n"); //Printf para ilustrar a movimentação da Torre

    moverTorre(5);

    printf("\nA Rainha está se movendo na direção: \n"); //Printf para ilustrar a movimentação da Rainha

    moverRainha(8);

    printf("\nO Cavalo está se movendo:\n");

    while (movimentoEmL--) //O -- para imprimir o movimento para a "Esquerda" apenas uma vez
    {
        for (cavalo = 1, i = 1 ; cavalo <= 2 && i <= 2 ; cavalo++, i)
        {
            printf("Cavalo, %d casa para Cima.\n", cavalo);
        }
            printf("Cavalo, %d casa para a direita.\n", i);
        
        
    }

    return 0;
}