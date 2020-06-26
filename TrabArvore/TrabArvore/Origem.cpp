#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct ElementoDaArvoreBinaria {
	int ru;
	char nome[40];
	char mail[40];
	struct ElementoDaArvoreBinaria* direita, * esquerda;
};

int menu();
void Inserir(struct ElementoDaArvoreBinaria** ElementoVarredura, int ru, char* nome, char* mail);
struct ElementoDaArvoreBinaria* Buscar(struct ElementoDaArvoreBinaria** ElementoVarredura, int ru);


int main() {
	int op, ru, pos, c, res;
	char nome[30], mail[30];
	struct ElementoDaArvoreBinaria* root;
	root = (struct ElementoDaArvoreBinaria*)malloc(sizeof(struct ElementoDaArvoreBinaria));
	root = NULL;

	struct ElementoDaArvoreBinaria* ElementoBusca;
	ElementoBusca = (struct ElementoDaArvoreBinaria*)malloc(sizeof(struct ElementoDaArvoreBinaria));

	Inserir(&root, 2823757, "ALUNO 01", "ALUNO01@hotmail.com");
	Inserir(&root, 2823758, "ALUNO 02", "ALUNO02@hotmail.com");
	Inserir(&root, 2823759, "ALUNO 03", "ALUNO03@hotmail.com");
	Inserir(&root, 2823760, "ALUNO 04", "ALUNO04@hotmail.com");
	Inserir(&root, 2823761, "ALUNO 05", "ALUNO05@hotmail.com");
	Inserir(&root, 2823762, "ALUNO 06", "ALUNO06@hotmail.com");
	Inserir(&root, 2823763, "ALUNO 07", "ALUNO07@hotmail.com");
	Inserir(&root, 2823764, "ALUNO 08", "ALUNO08@hotmail.com");
	Inserir(&root, 2823765, "ALUNO 09", "ALUNO09@hotmail.com");
	Inserir(&root, 2823767, "ALUNO 09", "ALUNO09@hotmail.com");
