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
	
	printf("***********JOGO DA FORCA**************\n\n");
	
	
	
	
	//lendo palvra
	printf("entre com uma palavra: ");
//	fgets(string, TAM, stdin);			 pega o 'enter'
	gets(string);
	strlwr(string);							//converte letras maiusculas em minuscolas		

	quantCaracter = strlen(string);
	
	criotografia(substring,  string);
		
	while((tentativa)&&(quantCaracter)){
		system("pause"); 
		system("cls");
		
		printf("\tpalavra escondida: %s", substring);
		printf("\n\nescolha uma letra: ");
		fflush(stdin);						//limpando buffer	
		scanf("%c", &letra);
		
		letra=tolower(letra);
		
		verificarCondicao(string, substring, letra, &tentativa, &quantCaracter);
		

	}
	system("pause"); 
	system("cls");
	
	if((!tentativa)&&(quantCaracter)){
		printf("\tpalavra escondida: %s", substring);
		printf("\n\nFIM DE JOGO\n\n");
		printf("\nVOCE PERDEU\n\n");		
	}else{
		printf("\tpalavra escondida: %s", substring);
		printf("\n\nFIM DE JOGO\n\n");
		printf("\nVOCE GANHOU\n\n");				
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
		printf("\n\nTentativas restantes: %d\n", *cont);		
//		printf("\nquantidade de caracter: %d\n", *quantCaracter);
	}else{
		(*cont)--;
//		printf("palavra escondida: %s", substring);
		printf("\nLetra nao encontrada");
		printf("\n\nTentativas restantes: %d\n", *cont);
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
