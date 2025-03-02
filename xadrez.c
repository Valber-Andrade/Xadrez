#include <stdio.h> //Incluindo a biblioteca

int main() {
    //Adicionando as variaveis de incremento
    int bispo = 1; 
    int torre = 1;
    int rainha = 1;

    //Usando while para movimentar o Bispo
    printf("O Bispo está se movendo na direção: \n"); //Printf para ilustrar a movimentação do Bispo

    while (bispo <= 5)//enquanto o bispo for menor que 5
    {
        printf("Cima, Direita.\n");//imprime as direções que ele vai andar
        bispo++; //bispo mais mais, para incremento nas casas
    
    }

    
    //Usando do-while para movimentar a Torre
    printf("\nA Torre está se movendo na direção: \n"); //Printf para ilustrar a movimentação da Torre

    do //Ira fazer o printf, enquanto o valor de torre for menor que 5
    {
        printf("Direita.\n");//imprime as direções que ela vai andar
        torre++; //torre mais mais, para incremento nas casas

    } while (torre <= 5);

    //Usando for para movimentar a Rainha
    printf("\nA Rainha está se movendo na direção: \n"); //Printf para ilustrar a movimentação da Rainha

    for (rainha = 1; rainha <= 8; rainha++)//rainha igual a 0, enquanto a rainha andar menos que 8 casas, rainha++
    {
        printf("Esquerda.\n");//imprime as direções que ela vai andar
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
