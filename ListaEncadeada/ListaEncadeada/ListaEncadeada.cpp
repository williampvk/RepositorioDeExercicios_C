#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int menu();
void InserirInicio(int num);
void InserirFim(int num);
void InserirMeio(int num, int posicao);
int Remover(int num);
void Listar();
void pause(float);

struct ElementoDaLista_Simples {
	int dado; //Aqui vai os dados da playlist de musica do exercicio
	ElementoDaLista_Simples *prox; //Aqui é o ponteiro com o endereço do próximo dado a ser armazenado
} *Head; //Variável que servirá como head para encontrar a struct

int main()
{
	int op, num, c, posicao;
	while (1) {
		op = menu();
		switch (op) {
		case 1: //Inserir no início da lista
			printf("Digite o numero desejado: ");
			scanf_s("%d", &num);
			while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado
			InserirInicio(num);
			break;
		case 2: //Inserir no fim da lista
			printf("Digite o numero desejado: ");
			scanf_s("%d", &num);
			while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado
			InserirFim(num);
			break;
		case 3: //Inserir no meio da lista
			printf("Digite o numero desejado: ");
			scanf_s("%d", &num);
			while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado
			printf("Digite a posicao desejada: ");
			scanf_s("%d", &posicao);
			while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado
			InserirMeio(num, posicao);
			break;
		case 4: //Remover da lista
			int res;
			printf("Digite o numero a ser removido: ");
			scanf_s("%d", &num);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			res = Remover(num);
			if (res == 1)
			{
				printf("Numero removido.");
				pause(1.2);
			}
			else
			{
				printf("Numero nao encontrado.");
				pause(1.2);
		    }
			break;
		case 5: //Mostrar a lista
			Listar();
			break;
		case 6:
			return 0;
		default:
			printf("Invalido\n");
		}

	}
	return 0;

}

int menu() {
	int op, c;
	system("Cls");

	printf("1.Inserir no inicio da lista encadeada simples\n");
	printf("2.Inserir no fim da lista encadeada simples\n");
	printf("3.Inserir no meio da lista encadeada simples\n");
	printf("4.Remover da lista encadeada simples\n");
	printf("5.Mostrar a lista encadeada simples\n");
	printf("6.SAIR\n");
	printf("Digite sua escolha: ");

	scanf_s("%d", &op);
	while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado

	system("Cls");
	return op;

}

 void InserirInicio(int num)
 {
	 ElementoDaLista_Simples *NovoElemento;
	 //Aloca um espaço na memória
	 NovoElemento = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	 NovoElemento->dado = num;

	 if (Head == NULL) //Primeiro verificar se o Head está vazio
	 {
		 Head = NovoElemento; //insere o NovoElemento no Head
		 Head->prox = NULL; //Agora o Head aponta para um outro endereço nulo
	 }
	 else
	 {
		 //Se não está vazio, o NovoElemento criado com malloc aponta para o endereço do Head e ele se torna o novo Head
		 NovoElemento->prox = Head; // O endereço que o NovoElemento está apontando é o Head
		 Head = NovoElemento; //Insere o NovoElemento no Head
	 }
 }

 void InserirFim(int num)
 {
	 ElementoDaLista_Simples *NovoElemento;
	 //Aloca um espaço na memória
	 NovoElemento = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	 ElementoDaLista_Simples *ElementoVarredura;
	 ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	 NovoElemento->dado = num;
	 if (Head == NULL) //Primeiro verificar se o Head está vazio
	 {
		 Head = NovoElemento; //insere o NovoElemento no Head
		 Head->prox = NULL; //Agora o Head aponta para um outro endereço nulo
	 }
	 else
	 {
		 ElementoVarredura = Head; //A varredura começa pelo Head
		 while (ElementoVarredura->prox != NULL) //Enquanto o endereço for diferente de nulo
			 ElementoVarredura = ElementoVarredura->prox; //Verifica o próximo

		 //Encontrado o endereço nulo
		 ElementoVarredura->prox = NovoElemento; //O endereço ElementoVarredura receberá o dado do NovoElemento
		 NovoElemento->prox = NULL; //E o NovoElemento irá apontar para nulo
	 }
 }

 void InserirMeio(int num, int posicao)
 {
	 ElementoDaLista_Simples *NovoElemento;
	 //Aloca um espaço na memória
	 NovoElemento = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	 ElementoDaLista_Simples *ElementoVarredura;
	 ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	 ElementoDaLista_Simples *ElementoAuxiliar;
	 ElementoAuxiliar = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	 NovoElemento->dado = num;
	 if (posicao == 0) //Se a posicao digitada for 0 o Head será onde o dado entrará
	 {
		 Head = NovoElemento;
		 Head->prox = NULL;
	 }
	 else
	 {
		 ElementoVarredura = Head; //A varredura começa pelo Head
		 for (int i = 0; i < posicao -1; i++) //Varre até encontrar a posição digitada
			 ElementoVarredura = ElementoVarredura->prox;

		 ElementoAuxiliar = ElementoVarredura->prox; //Por enquanto o ElementoAuxiliar irá salvar o dado do ElementoVarredura
		 ElementoVarredura->prox = NovoElemento; // E o ElementoVarredura que agora está vazio recebe o dado NovoElemento
		 NovoElemento->prox = ElementoAuxiliar; // E o NovoElemento irá apontar para o ElementoAuxiliar
	 }
 }


 int Remover(int num)
 {
	 ElementoDaLista_Simples *ElementoVarredura;
	 ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));
	 ElementoDaLista_Simples *Anterior;
	 Anterior = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	 ElementoVarredura = Head; //A varredura começa pelo Head
	 while (ElementoVarredura != NULL) {
		 if (ElementoVarredura->dado == num) {
			 if (ElementoVarredura == Head) {
				 Head = ElementoVarredura->prox;
				 free(ElementoVarredura);
				 return 1;
			 }
			 else {
				 Anterior->prox = ElementoVarredura->prox;
				 free(ElementoVarredura);
				 return 1;
			 }
		 }
		 else {
			 Anterior = ElementoVarredura;
			 ElementoVarredura = ElementoVarredura->prox;
		 }
	 }
	 return 0;
 }
 

 void Listar()
 {
	 ElementoDaLista_Simples *ElementoVarredura;
	 ElementoVarredura = (struct ElementoDaLista_Simples*)malloc(sizeof(struct ElementoDaLista_Simples));

	 ElementoVarredura = Head; //A varredura começa pelo Head
	 if (ElementoVarredura == NULL) { //Se for nulo não há o que retornar
		 return;
	 }
	 while (ElementoVarredura != NULL) { //Enquanto a varredura for diferente de nulo, imprime o dado e verifica o próximo
		 printf("%d ", ElementoVarredura->dado);
		 ElementoVarredura = ElementoVarredura->prox;
	 }
	 printf("\n");

	 system("pause");
	 return;
 }

 void pause(float delay1) {

	 if (delay1 < 0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

	 float inst1 = 0, inst2 = 0;

	 inst1 = (float)clock() / (float)CLOCKS_PER_SEC;

	 while (inst2 - inst1 < delay1) inst2 = (float)clock() / (float)CLOCKS_PER_SEC;

	 return;

 }