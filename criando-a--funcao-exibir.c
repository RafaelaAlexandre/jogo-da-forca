/*
desenvolva uma funcao que dado uma string
um caracter, crie uma nova string onde exiba
todas as ocorrencias desse caracter na string
e os demais, substitua por *
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define FALSE 0
#define TAM 30

void exibirCaracter(char string[], char substring[], char caracter);
void criotografia(char substring[], char string[]);

int main(){
	char string[TAM],substring[TAM], caracter;
	int retorno=3;
	
	printf("entre com uma palavra: ");
	gets(string);
	
	criotografia(substring,  string);
	while(retorno){
		
		printf("entre com uma letra: ");
		fflush(stdin);
		scanf("%c", &caracter);
		
		exibirCaracter(string,substring, caracter);
		retorno--;
	}

	
//	printf("substring: %s", substring);

	
}
void exibirCaracter(char string[],char substring[], char caracter){
	int i, cont=0;
	for(i=0;string[i];i++){		
		if(caracter==string[i]){
			substring[i]=string[i];
		}	
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


	

