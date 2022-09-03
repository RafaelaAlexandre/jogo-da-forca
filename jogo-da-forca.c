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
void exibirPalavra(char string[], char caracter);
void verificarCondicao(char string[], char caracter, int *cont, int*quantCaracter);

int main(){	
	int tentativa=7, quantCaracter;
	char string[TAM], letra;
	
	//lendo palvra
	printf("entre com uma palavra: ");
//	fgets(string, TAM, stdin);
	gets(string);
	strlwr(string);							//converte letras maiusculas em minuscolas		

	system("pause"); 
	system("cls");

	exibirPalavra(string, letra);

	quantCaracter = strlen(string);
	
	
	while((tentativa)&&(quantCaracter)){
		
		printf("\nescolha uma letra: ");
		fflush(stdin);						//limpando buffer	
		scanf("%c", &letra);
		
		letra=tolower(letra);
		
		verificarCondicao(string, letra, &tentativa, &quantCaracter);
	}
	printf("\nFim do jogo");
		
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
//funcao buescar retorna o numero de ocorrencias do caracter
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
void verificarCondicao(char string[], char caracter, int *cont, int *quantCaracter){
	int retorno;
			
	retorno= buscarCaracter(string, caracter);
	
	if(retorno){
		*quantCaracter=*quantCaracter-retorno;
		exibirPalavra(string, caracter);
		printf("\nTentativas restantes: %d", *cont);		
		printf("\nquantidade de caracter: %d", *quantCaracter);
	}else{
		(*cont)--;
		exibirPalavra(string, caracter);
		printf("\nLetra nao encontrada\n");
		printf("Tentativas restantes: %d", *cont);
		printf("\nquantidade de caracter: %d", *quantCaracter);	
	}
}

