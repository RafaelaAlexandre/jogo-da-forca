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

int main(){	
	
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
	exibirPalavra(string, letra);
		
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

