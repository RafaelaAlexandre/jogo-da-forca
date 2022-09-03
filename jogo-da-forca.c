/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define TAM 50
#define TRUE 1
#define FALSE 0

int buscarCaracter(char string[], char caracter);
void exibirPalavra(char string[], char caracter);
void verificarCondicao(char string[], char caracter, int *cont);

int main(){	
	int tentativa=7;
	char string[TAM], letra;
	
	//lendo palvra
	printf("entre com uma palavra: ");
	fgets(string, TAM, stdin);
	strlwr(string);	//converte letras maiusculas em minuscolas		
	system("pause"); 
	system("cls");
	exibirPalavra(string, letra);

	printf("\nescolha uma letra: ");
	fflush(stdin);	//limpando buffer	
	scanf("%c", &letra);
	letra=tolower(letra);
//	while(){
		verificarCondicao(string, letra, &tentativa);
//	}
		
}
void exibirPalavra(char string[], char caracter){
	int i;
	printf("\tpalavra escolhida: ");
	for(i=0;string[i];i++){
		if(string[i]==caracter){
			printf("%c",string[i]);
		}else{
			printf("*");
		}
	}
}
int buscarCaracter(char string[], char caracter){
	int i;
	for(i=0;string[i];i++){
		if(string[i]==caracter){
			return TRUE;
		}
		return FALSE;
	}
}
void verificarCondicao(char string[], char caracter, int *cont){
	int retorno;
	retorno= buscarCaracter(string, caracter);
	if(retorno==TRUE){
		exibirPalavra(string, caracter);
		printf("\nTentativas restantes: %d", *cont);
	}else{
		*cont--;
		printf("Letra nao encontrada\n");
		printf("Tentativas restantes: %d", *cont);	
	}
}

