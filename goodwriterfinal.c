#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//CADASTRO PESSOA
char nome[30], resposta;
char genero, tipo_escritor;
int qntLivros = 0;
int id = 0;

//CADASTRO LIVRO
char titulo[30];
char generoLivro = ' ';
#define NAME_MAX 100

//METAS
int metas[6];


void Metas()
{
    printf("\n\n..............................................................................");
                    printf("\n                 ANÁLISE DE DESEMPENHO COM BASE NA QUANTIDADE DE PALAVRAS    |");
                    printf("\n..............................................................................");
	printf("\nDigite a sua meta diaria de palavras: \n");
	scanf("%d", &metas[0]);
	printf("\nDigite quantas palavras você escreveu na segunda: \n");
	scanf("%d", &metas[1]);
	printf("\nDigite quantas palavras você escreveu na terca: \n");
	scanf("%d", &metas[2]);
	printf("\nDigite quantas palavras você escreveu na quarta: \n");
	scanf("%d", &metas[3]);
	printf("\nDigite quantas palavras você escreveu na quinta: \n");
	scanf("%d", &metas[4]);
	printf("\nDigite quantas palavras você escreveu na sexta: \n");
	scanf("%d", &metas[5]);
	for(int a = 1; a <= 5; a++)
	{
		if(metas[a] > metas[0])
		{
			printf("\n --> Meta superada!\n");
		}
		else
		{
			printf("\n --> Meta não superada!\n");
		}
	}
}

void Casos(char caso)
{


                switch(caso)
	{

	case 'C':
		printf("\nficcao\n");
		break;

	case 'F':
		printf("\nfantasia\n");
		break;

	case 'P':
		printf("\npoesia\n");
		break;

	case 'R':
		printf("\nromance\n");
		break;

	case 'T':
		printf("\nterror\n");
		break;
	}
}
void Cadastro(){

	printf("\nInforme seu nome: \n");

	fgets(nome, sizeof(nome), stdin);

    printf("\nVocê é um escritor(a) inciante ou experiente?\n");
	printf("\nTecle I para iniciante - Tecle E para experiente: ");
	scanf("%s",&tipo_escritor);
	if(tipo_escritor == 'E'){
    printf("\nDigite o genero que voc mais escreve: \n");
    scanf("%s",&genero);
    printf("\nDigite a quantidade de livros que vc ja escreveu: \n");
	scanf("%d" , &qntLivros);
	printf("\nDeseja comecar uma nova historia?\n S - para sim | N - para não.\n");
	scanf("%s", &resposta);
	  if(resposta=='S'){
	printf("\n\n..............................................................................");
                printf("\n                        CRIAÇÃO DE UMA NOVA HISTÓRIA                         |");
                printf("\n..............................................................................");
	printf("\n\tSELECIONE O GENÊRO DA HISTORIA: /n");

	printf("C - FICCAO CIENTIFICA\n F - FANTASIA\n P - POESIA \n R - ROMANCE\n T - TERROR\n");
	scanf("%s", &generoLivro);


	printf("\nDigite o titulo do livro separado por _ \n");
	scanf("%s", titulo);


	Casos(generoLivro);
	Metas();
}
	}
	 else if (resposta=='N'){
        printf("\n\nAté a próxima!!");
        }
     else if(tipo_escritor=='I'){

	printf("\nDeseja comecar uma nova historia?\n S - para sim | N - para não.\n");
	scanf("%s", &resposta);
	  if(resposta=='S'){
	printf("\n\n..............................................................................");
                printf("\n                        CRIAÇÃO DE UMA NOVA HISTÓRIA                         |");
                printf("\n..............................................................................");
	printf("\n\tSELECIONE O GENERO DA HISTORIA: /n");

	printf("C - FICCAO CIENTIFICA\n F - FANTASIA\n P - POESIA \n R - ROMANCE\n T - TERROR\n");
	scanf("%s", &generoLivro);


	printf("\nDigite o titulo do livro separado por _ \n");
	scanf("%s", titulo);


	Casos(generoLivro);
	Metas();
}
}
   else if (resposta=='N'){
        printf("\n\nAté a próxima!!");

        }}

int main(){
  setlocale(LC_ALL, "Portuguese");

    printf("                        ---------------------------------");
    printf("\n                        | SEJA BEM VINDO AO GOOD WRITER |");
    printf("\n                        ---------------------------------");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nAqui, você vai analisar o seu desempenho diário em relação a sua produtividade|");
    printf("\n-------------------------------------------------------------------------------");
    printf("\n----------------------------------------------");
    printf("\nMas antes, vamos fazer algumas perguntinhas!!|");
    printf("\n----------------------------------------------");
    Cadastro();
	   printf("\n\n");

return 0;
}
