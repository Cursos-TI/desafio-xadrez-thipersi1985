#include <stdio.h>
#include <stdlib.h>

int main (){

    int a;      //variável de controle que será utilizada para o movimento da torre
    int b;      //variável de controle que será utilizada para o movimento do bispo
    int c;      //variável de controle que será utilizada para o movimento da rainha
      
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
    
     return 0;
}