#include <stdio.h>

void recursivoTorre (int t) {   //função recursiva criada fora da função principal; toda vez que for "chamada" na função principal, executará o código dentro dela.  
    if (t > 0) {                //Esse código simulará o movimento da torre 5 vezes para a direita
        printf("Direita\n");
        recursivoTorre (t - 1);
    }
}

void recursivoRainha (int r) {  //função recursiva criada fora da função principal; toda vez que for "chamada" na função principal, executará o código dentro dela.  
    if (r > 0) {                //Esse código simulará o movimento da rainha 8 vezes para a esquerda
        printf("Esquerda\n");
        recursivoRainha (r - 1);
    }
}

void recursivoBispo (int b) {   //função recursiva criada para simular o movimento do bispo 5 vezes para cima e para direita, simultaneamente;

    if (b > 0){
        for (int i = 1; i <= 1 ; i++) {     //o loop externo (que simula o movimento na vertical) executará apenas uma vez e a execução do código seguirá para o loop mais interno (que simula o movimento na horizontal), e por sua vez também só executará uma vez, devido à condição adotada.
            printf("Cima, ");

            for (int j = 1; j <= 1; j++) {
                printf("Direita\n");
            }
        }
    
        recursivoBispo (b - 1);     //a recursividade simulará um loop, fazendo com que o código dentro dela seja repetido 5 vezes;

    }   
                   
}

int main (){ //função principal

    int numTorre = 5, numRainha = 8, numBispo = 5, cavalo, i, j; //declaração de variáveis, todas do tipo inteiro

    printf("*** TORRE ***\n");
    recursivoTorre (numTorre); //"chamada" da função de recursividade, que foi escrita fora da função principal, para simular o movimento da torre.

    printf("*** RAINHA *** \n");
    recursivoRainha (numRainha); //"chamada" da função de recursividade, que foi escrita fora da função principal, para simular o movimento da rainha.

    printf("*** BISPO *** \n");
    recursivoBispo (numBispo); //"chamada" da função de recursividade, que foi escrita fora da função principal, para simular o movimento do bispo.

    do  //utilizando funções aninhadas ('do-while' aninhado com o 'for'), foi possível simular o movimento do cavalo duas casas para cima e uma para a direita.
    {
        cavalo = 1;
        printf("*** CAVALO *** \n");        
        for (i = 1, j = 2; i <= 2 ; i++, j--)   //dentro desse loop (for) estão sendo usadas múltiplas variáveis ('i' e 'j'), preferi usar variáveis globais, mas também poderia ter utilizado variáveis locais, dentro do próprio loop (for).
        {                                       // o que ocorre aqui é o seguinte: quando o loop for executado a primeira vez, com i = 1 e j = 2, imprimirá apenas a palavra "Cima".
            printf("Cima \n");                  // na segunda execução do loop (for), com i = 2 e j = 1, imprimirá novamente a palavra "Cima", mas como j = 1, o laço parará (por conta do break). 
            cavalo++;   
            if (j == 1) break;                  //A execução do código então seguirá fora do loop (for) e imprimirá a palavra "Direita"; 
        }

        printf("Direita\n");

    } while (cavalo <= 1);                      //Como a condição dentro do while não foi atendida, porque a variável "cavalo" foi incrementada e agora é igual a 2, o "do" não executará novamnete, e portanto, o programa se encerrará.
    
    return 0;
    
}