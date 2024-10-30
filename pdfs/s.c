#include <stdio.h>

typedef struct{
	int direito, esquerdo;
}TamanhodoPe;


int main(){

	

	typedef struct {
		char nome[50];
		int  idade;
		TamanhodoPe tam;
	} Aluno;


	Aluno aluno[10];

	int n ;

	scanf(" %d", &n);
	for(int i = 0 ; i < n ; i++){
		printf("Nome: ");
		scanf(" %99[^\n] ", aluno[i].nome);
		scanf(" %d %d %d", &aluno[i].idade, &aluno[i].tam.direito, &aluno[i].tam.esquerdo);
	}
	int x;
	printf("Digite a idade: ");
	scanf(" %d", &x);
	//printf(" %d" , aluno[0].idade == i);
	int i ;
	for(i = 0 ; i < n ; i++);{

		if(x == aluno[i].idade){
			printf("Nome do aluno: %s , idade do aluno %d , tamanho dos pes(D, E):%d %d ", aluno[i].nome, aluno[i].idade, aluno[i].tam.direito , aluno[i].tam.esquerdo);
			printf("aqui");
		}
	}
	return 0;

}
