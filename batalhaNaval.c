#include <stdio.h>

int main() {

printf("-- Batalha Naval --\n");


//declarando a matriz que representa a água
int agua[10][10];
int linha, coluna;

//inicializando o tabuleiro através de loops aninhados
for (linha = 0; linha < 10; linha++) {
    for (coluna = 0; coluna < 10; coluna++) {
        agua[linha][coluna] = 0;
    }
}

//declarando, inicializando e posicionando os navios, substituindo os valores da matriz original
agua[1][2] = 3;
agua[1][3] = 3;
agua[1][4] = 3; //horizontal

agua[5][5] = 3;
agua[6][5] = 3;
agua[7][5] = 3; //vertical

//imprimindo tudo na tela
for (linha = 0; linha < 10; linha++){
    for (coluna = 0; coluna < 10; coluna++)
    {
        printf("%d", agua[linha][coluna]);
    }

    printf("\n");
}


return 0;

}
