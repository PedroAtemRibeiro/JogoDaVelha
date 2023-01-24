#include <stdio.h>
#include <stdlib.h>

int main()
{

    //tipo de dado
    int l, c, linha, coluna;
    int jogador=1, vencedor=0, jogadas=0,trofeu =0;
    char jogo[3][3];



    for(l=0; l<3; l++){

        for(c=0; c<3; c++){
            jogo[l][c]=' ';
        }
    }
   
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
        
        if(vencedor == 1 || jogadas == 9){
            break;
        }
    

    do{
        printf("\n\nJogador %d  digite a coordenada da sua jogada: ",jogador);
        scanf("%d %d",&linha ,&coluna);

    }while(linha<0 || linha>2 || coluna<0 || coluna>2 || jogo[linha][coluna]!=' ');

    

    if(jogador == 1){
    jogo[linha][coluna]='0';
    if(vencedor < 1){
    jogador++;
    }
    }else{
    jogo[linha][coluna]='X';
    if(vencedor < 1){
    jogador=1;
    }
    }
    jogadas++;
    
    if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
       jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
       jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
        trofeu = 2;
        vencedor=1;
        
    }else if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] =='0'||
             jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] =='0' ||
             jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] =='0'){
                trofeu = 1;
                vencedor++;
                
                






    }else if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
       jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
       jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
        trofeu = 2;
        vencedor++;
        
    }else if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
       jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0'||
       jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0'){
        trofeu = 1;
        vencedor++;
        






    }else if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X' ||
        jogo[0][2]== 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X' ){
        trofeu = 2;
        vencedor++;

    }else if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0' ||
        jogo[0][2]== '0' && jogo[1][1] == '0' && jogo[2][0] == '0' ){
        trofeu = 1;
        vencedor++;
        }


    if(vencedor == 1 || vencedor == 2){
    printf("\n\n");
        printf("------------------------------------------------------");
        printf("\n\tParabéns jogador %d, você é o grande vencedor ", trofeu);
        printf("\n-------------------------------------------------------\n\n");
        
     
            
        }else if( jogadas == 9 ){
        if(jogador == 1){
    jogo[linha][coluna]='X';
    }else{
        jogo[linha][coluna]='0';
    }
    
        printf("\n\n");
        printf("-------------------------------------------------------");
        printf("\n\t\tEmpate, Deu Velha");
        printf("\n-------------------------------------------------------\n\n");
        
        
    }
    

   

}while(jogadas < 9 || vencedor == 0);




   

   
   
   
   
   
   



    return 0;
}
