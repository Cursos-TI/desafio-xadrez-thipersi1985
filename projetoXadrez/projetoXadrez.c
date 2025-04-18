#include <stdio.h>

int main (){

    int a;      //variável de controle que será utilizada para o movimento da torre
    int b;      //variável de controle que será utilizada para o movimento do bispo
    int c;      //variável de controle que será utilizada para o movimento da rainha
    int i, j;   //variáveis de controle que serão utilizadas para o movimento do cavalo
      
        // esse bloco irá implementar o movimento da torre, utilizando o "for" para simular o movimento da torre cinco vezes para direita.
        printf("*** TORRE ***\n");
        for (a = 1; a <= 5; a++) {  
            printf("Direita\n");
        }
        
        // esse bloco irá implementar o movimento do bispo, utilizando o "do - while" para simular o movimento do bispo cinco vezes para cima e para direita simultaneamente.
        printf("*** BISPO ***\n");
        b = 1;
        do {
            printf("Cima, Direita\n");
            b++;
        } while (b <= 5);    

        // esse bloco irá implementar o movimento da rainha, utilizando o "while" para simular o movimento da rainha oito vezes para a esquerda.
        printf("*** RAINHA ***\n");
        c = 1;
        while (c <= 8) {
            printf("Esquerda\n");
            c++;
        }

        // esse bloco irá implementar o movimento do cavalo, utilizando o "While" e o "For" aninhados para simular o movimento do cavalo 2 casas para baixo e uma para esquerda.
        printf("*** CAVALO ***\n");
        for (j = 1; j < 2; j++)     // loop externo
        {   
            i = 1;
            while (i <= 2)          // loop interno
            {
                printf("Baixo\n");  // exibição de saída do loop interno
                i++;                // incremento loop interno
            }
        
            printf("Esquerda\n");   // exibição de saída do loop externo
        
        }
            
     return 0;

}