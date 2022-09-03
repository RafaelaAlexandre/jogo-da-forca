/*
ta dando tudo errado 
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define TAM 50
#define TRUE 1
#define FALSE 0

int buscarCaracter(char string[], char caracter);
void verificarCondicao(char string[], char substring[], char caracter, int *cont, int*quantCaracter);
void criotografia(char substring[], char string[]);
void exibirCaracter(char string[], char substring[], char caracter);

int main(){	
	int tentativa=7, quantCaracter;
	char string[TAM], substring[TAM], letra;
	
	
	printf("*****************JOGO DA FORCA**************\n\n");
	printf("Regras:\n\n");
	printf("Jogador 1 escolher uma palavra.\n");
	printf("Jogador 2 tenta adivinhar as letras dessa palavra.\n");
	printf("Ganha se o Jogador acertar todas as letras.\n");
	printf("Perde se o Jogador excerder o numero de tentativas.\n");
	printf("\nTotal de tentativas: %d\n\n", tentativa);
	system("pause"); 
	system("cls");
	
	//lendo palvra
	printf("Entre com uma palavra: ");
//	fgets(string, TAM, stdin);			 pega o 'enter'
	gets(string);
	strlwr(string);							//converte letras maiusculas em minuscolas	
	printf("\nA palavra escolhida e: %s\n\n", string);		

	quantCaracter = strlen(string);
	
	criotografia(substring,  string);
		
	while((tentativa)&&(quantCaracter)){
		system("pause"); 
		system("cls");
		
		printf("\tPalavra escondida: %s", substring);
		printf("\n\nEscolha uma letra: ");
		fflush(stdin);						//limpando buffer	
		scanf("%c", &letra);
		
		letra=tolower(letra);
		
		verificarCondicao(string, substring, letra, &tentativa, &quantCaracter);
		

	}
	system("pause"); 
	system("cls");
	
	if((!tentativa)&&(quantCaracter)){
		printf("\tPalavra escondida: %s", substring);
		printf("\n\nFIM DE JOGO!\n\n");
		printf("\nVOCE PERDEU!\n\n");		
	}else{
		printf("\tPalavra escondida: %s", substring);
		printf("\n\nFIM DE JOGO!\n\n");
		printf("\nVOCE GANHOU!\n\n");				
	}

		
}
//funcao buscar retorna o numero de ocorrencias do caracter
int buscarCaracter(char string[], char caracter){
	int i, cont=0;
	for(i=0;string[i];i++){		
		if(caracter==string[i]){
			cont++;
		}		
	}
	if(!cont){
		return FALSE;
	}
	return cont;	
}
void verificarCondicao(char string[], char substring[], char caracter, int *cont, int *quantCaracter){
	int retorno;
			
	retorno= buscarCaracter(string, caracter);
	exibirCaracter(string, substring, caracter);
	
	if(retorno){
		*quantCaracter=*quantCaracter-retorno;
		printf("\nVoce acertou a Letra: %c", caracter);
		printf("\n\nTentativas restantes: %d\n\n", *cont);		
//		printf("\nquantidade de caracter: %d\n", *quantCaracter);
	}else{
		(*cont)--;
//		printf("palavra escondida: %s", substring);
		printf("\nLetra nao encontrada");
		printf("\n\nTentativas restantes: %d\n\n", *cont);
//		printf("\nquantidade de caracter: %d\n", *quantCaracter);	
	}
}
void criotografia(char substring[], char string[]){
	int tamanho, i;
	tamanho= strlen(string);
	
	for(i=0;i<tamanho;i++){
		substring[i]='*';
	}
	substring[i]='\0';
}
void exibirCaracter(char string[],char substring[], char caracter){
	int i, cont=0;
	for(i=0;string[i];i++){		
		if(caracter==string[i]){
			substring[i]=string[i];
		}	
	}	
}
