#include <stdio.h>
#include <stdlib.h>

int main()
{

    //tipo de dado
    int l, c, linha, coluna;
    int jogador=1, vencedor=0, jogadas=0;
    char jogo[3][3];

    //criação da estrutura de dados

    for(l=0; l<3; l++){

        for(c=0; c<3; c++){
            jogo[l][c]=' ';
        }
    }
    //preencher essas posições com um espaço vago
    do{
    printf("     ");

    for(l=0;l<3;l++){
        printf("   %d",l);
    }

    printf("\n");
    for(l=0; l<3; l++){
        printf("\n\t");
        for(c=0; c<3; c++){
        printf("%c",jogo[l][c]);
             if(c<2){
                printf(" | ");
            }else{
                printf("  %d",l);
            }

            }
           if(l<2){

                printf("\n     ---------------");


        }
        }

    do{
        printf("\n\nJogador %d  digite a coordenada da sua jogada: ",jogador);
        scanf("%d %d",&linha ,&coluna);

    }while(linha<0 || linha>2 || coluna<0 || coluna>2 || jogo[linha][coluna]!=' ');



    if(jogador == 1){
    jogo[linha][coluna]='0';
    jogador++;
    }else{
    jogo[linha][coluna]='X';
    jogador=1;
    }
    jogadas++;

    if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
       jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
       jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
        printf("Parabens jogador 2, voce ganhou!");
        vencedor=1;
    }else if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] =='0'||
             jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] =='0' ||
             jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] =='0'){
                printf("Parabens jogador 1,  voce ganhou!");
                vencedor++;






    }else if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
       jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
       jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
        printf("Parabens Jogador 2, voce ganhou!");
        vencedor++;
    }else if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
       jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0'||
       jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0'){
        printf("Parabens Jogador 1, voce ganhou !");
        vencedor++;






    }else if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X' ||
        jogo[0][2]== 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X' ){
        printf("Parabens jogador 2, voce ganhou!");
        vencedor++;

    }else if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0' ||
        jogo[0][2]== '0' && jogo[1][1] == '0' && jogo[2][0] == '0' ){
        printf("Parabens jogador 1, voce ganhou!");
        vencedor++;
        }


    



}while(jogadas < 9 && vencedor == 0);




    return 0;
}