#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

void push(int value);
void pop();
void dysplay();
void pause(float delay1);

struct STACK //Nome da estrutura de pilha
{
	int dado;
	STACK *prox;
} *top = NULL; //O top funcionar� como o Head da lista encadeada por�m aqui j� � atribuido o valor nulo

int main()
{
	int op, value, c;

	while (1) {
		system("cls");
		printf("\n****** MENU ******\n");
		printf("1. Empilhar/Push\n2. Desempilhar/Pop\n3. Listar\n4. Sair\n");

		printf("Escolha sua opcao: ");
		scanf_s("%d", &op);
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		switch (op) {
		case 1: //Empilhar
			printf("\nDigite um valor para ser inserido: ");
			scanf_s("%d", &value);
			while ((c = getchar()) != '\n' && c != EOF) {}
			push(value);
			break;
		case 2: //Desempilhar
			pop();
			break;
		case 3: //Listar
			dysplay();
			break;
		case 4:
			exit(0);
		default:
			printf("\nDigite outra opcao.\n");
		}
		
	}

	system("pause");
	return 0;

}

void push(int value) //Ir� empilhar os dados um acima do outro deixando sempre o �ltimo dado inserido como topo
{
	STACK *NovoElemento;
	NovoElemento = (struct STACK*)malloc(sizeof(struct STACK));

	NovoElemento->dado = value;
	if (top == NULL)
		NovoElemento->prox = NULL; //Se o elemento estiver sozinho ele apontar� para nulo
	else
		NovoElemento->prox = top; //Sen�o apontar� para o antigo topo
	top = NovoElemento; //E ele ser� o novo topo
	printf("\nInserido com sucesso!");
	pause(1.2);
}

void pop() //Ir� desempilhar os dados que j� foram inseridos
{
	STACK *temp = top; //Vari�vel tempor�ria que ir� receber o dado a ser exclu�do(sempre � o topo)
	if (top == NULL)
		printf("\nPilha est� vazia.\n");
	else
	{
		printf("\nElemento deletado: %d", temp->dado); //Vai mostrar o dado do topo que ser� exclu�do
		pause(1.2);
		top = temp->prox; //Aqui o pr�ximo dado se torna o topo
		free(temp); //E aqui a vari�vel auxiliar que recebeu o dado do topo est� sendo limpa 
	}
}

void dysplay() //Mostrar no prompt os dados empilhados
{
	STACK *ElementoVarredura = top;

	if (top == NULL)
		printf("\nPilha vazia!!!\n");
	else {

		while (ElementoVarredura->prox != NULL)
		{
			printf("%d\n", ElementoVarredura->dado);
			ElementoVarredura = ElementoVarredura->prox;
		}
		printf("%d\n", ElementoVarredura->dado);
	}
	system("pause");
}

void pause(float delay1) {

	if (delay1 < 0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

	float inst1 = 0, inst2 = 0;

	inst1 = (float)clock() / (float)CLOCKS_PER_SEC;

	while (inst2 - inst1 < delay1) inst2 = (float)clock() / (float)CLOCKS_PER_SEC;

	return;

}