#include<stdio.h>
#include<stdlib.h>
//variáveis globais
//char jogador1[256],jogador2][256]
char tab[3][3], op, aux;
int x, y, z, valida, l, c, ok=0, verificar=0,posicao;
//funções
void limpa_tabuleiro(){
	for (x=0; x<3; x++)
		for (y=0; y<3; y++)
			tab[x][y]=' ';//espaço
}
/*
void cadastro_jogador() { //criando a função
    printf("Jogador1\n");
    printf("Digite o seu nome: ");
    gets(jogador1); //recebe nome do jogador 1
    printf("Jogador2\n");
    printf("Digite o seu nome: ");
    gets(jogador2); //recebe nome do jogador 2
}
*/

void recebe_jogada(){
	aux='?';
	do {
		
		printf ("\n Selecione uma casa no tabuleiro:\t");
		scanf("%d", &posicao);
		printf("\n x ou o ?\t");
		scanf(" %c", &aux);
		if(aux !='x' && aux !='o'){
			printf("Caracter invalido");
			recebe_jogada();
		}
		
		switch(posicao){
		case 7:
		tab[0][0]=aux;
		break;
		
		case 8:
		tab[0][1]=aux;
		break;
		
		case 9:
		tab[0][2]=aux;
		break;
		
		case 4:
		tab[1][0]=aux;
		break;
		
		case 5:
		tab[1][1]=aux;
		break;
		
		case 6:
		tab[1][2]=aux;
		break;
		
		case 1:
		tab[2][0]=aux;
		break;
		
		case 2:
		tab[2][1]=aux;
		break;
		
		case 3:
		tab[2][2]=aux;
		break;
		
		 default:printf ("Número invalido.\n");
		
		valida=0;
		
		if (tab[l][c]==' ')
			valida=1;
		else
			valida=0;
		if (valida==1){
			tab[l][c]=aux;
			ok++;
		}
		else{
			printf("\n Posicao ja ocupada \n");
			system("pause");
		}
	}
	}while (valida=0);
}

void mostra_tabuleiro(){
//	printf("\n\t    0   1   2");
	printf("\n\n\t0   %c \xB3 %c \xB3 %c ", tab[0][0], tab[0][1], tab[0][2]);
	printf("\n\t   \xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc5\xc4\xc4\xc4");
	printf("\n\t1   %c \xB3 %c \xB3 %c ", tab[1][0], tab[1][1], tab[1][2]);
	printf("\n\t   \xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc5\xc4\xc4\xc4");
	printf("\n\t2   %c \xB3 %c \xB3 %c \n\n", tab[2][0], tab[2][1], tab[2][2]);
}




void analisa(){
		if (tab[0][0]=='x' && tab[1][1]=='x' && tab[2][2]=='x'//diagonal
		 || tab[2][0]=='x' && tab[1][1]=='x' && tab[0][2]=='x'//diagonal
		 || tab[0][0]=='x' && tab[1][0]=='x' && tab[2][0]=='x'//Vertical
		 || tab[0][1]=='x' && tab[1][1]=='x' && tab[2][1]=='x'//Vertical
		 || tab[0][2]=='x' && tab[1][2]=='x' && tab[2][2]=='x'//Vertical
		 || tab[0][0]=='x' && tab[0][1]=='x' && tab[0][2]=='x'//horizontal
		 || tab[1][0]=='x' && tab[1][1]=='x' && tab[1][2]=='x'//horizontal
		 || tab[2][0]=='x' && tab[2][1]=='x' && tab[2][2]=='x'){	//horizontal
		 	system("cls");
		 	mostra_tabuleiro();
		 	printf("O jogador X vencer o jogo\n");
		 	system("pause");}
		else {
			if (tab[0][0]=='o' && tab[1][1]=='o' && tab[2][2]=='o'//diagonal
		     || tab[2][0]=='o' && tab[1][1]=='o' && tab[0][2]=='o'//diagonal
		     || tab[0][0]=='o' && tab[1][0]=='o' && tab[2][0]=='o'//Vertical
		     || tab[0][1]=='o' && tab[1][1]=='o' && tab[2][1]=='o'//Vertical
		     || tab[0][2]=='o' && tab[1][2]=='o' && tab[2][2]=='o'//Vertical
		     || tab[0][0]=='o' && tab[0][1]=='o' && tab[0][2]=='o'//horizontal
		     || tab[1][0]=='o' && tab[1][1]=='o' && tab[1][2]=='o'//horizontal
		     || tab[2][0]=='o' && tab[2][1]=='o' && tab[2][2]=='o'){	//horizontal
		 	 	system("cls");
		 	 	mostra_tabuleiro();
		 	 	printf("O jogador O vencer o jogo\n");
		 	 	system("pause");}
		}//fecha else
}

//outras funções
main(){
	limpa_tabuleiro();
	while(ok<9){
	//	cadastro_jogador();
		system("cls");	
		mostra_tabuleiro();
		recebe_jogada();
		analisa();
	}
	printf("Não houve vencedores");
	system("pause>>null");
}

