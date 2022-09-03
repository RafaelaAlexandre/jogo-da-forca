/*
desenvolva uma funcao que dado uma string
um caracter, retorne o numero de ocorrencias 
desse caracter na string
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define FALSE 0
#define TAM 30

int buscarCaracter(char string[], char caracter);

int main(){
	char string[TAM], caracter;
	int retorno;
	
	printf("entre com uma palavra: ");
	gets(string);
	
	printf("entre com uma letra: ");
	scanf("%c", &caracter);
	
	retorno= buscarCaracter(string, caracter);
	
	printf("o numero de ocorrencias e: %d", retorno);

	
}
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

