/*

*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define TAM 50
#define TRUE 1
#define FALSE 0


int main(){	
	
	char string[TAM], letra;
	
	//lendo palvra
	printf("entre com uma palavra: ");
	fgets(string, TAM, stdin);
	strlwr(string);	//converte letras maiusculas em minuscolas		
	system("pause"); 
	system("cls");


	printf("\nescolha uma letra: ");
	fflush(stdin);	//limpando buffer	
	scanf("%c", &letra);
	letra=tolower(letra);
	
		
}

