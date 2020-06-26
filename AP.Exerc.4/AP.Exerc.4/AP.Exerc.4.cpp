#include <stdio.h>
#include <stdlib.h>

//Função para iserir string 2 dentro da string 1 a partir da posição 5
void funcao(char pnome[20], char unome[20], char resposta[12], int pos) {
	resposta[0] = pnome[0];
	resposta[1] = pnome[1];
	resposta[2] = pnome[2];
	resposta[3] = pnome[3];
	resposta[4] = pnome[4];
	resposta[5] = unome[0];
	resposta[6] = unome[1];
	resposta[7] = unome[2];
	resposta[8] = unome[3];
	resposta[9] = pnome[5];
	resposta[10] = pnome[6];
	resposta[11] = '\0';

}

//Programa principal
int main()
{
	//Variáveis
	char pnome[20], unome[20], resposta[12] ;
	int  pos;
        
	    printf("Digite o seu primeiro nome: \n");
		gets_s(pnome);

	    printf("Digite o seu ultimo nome: \n");
		gets_s(unome);
		
		printf("Digite a posicao de interrupcao: \n");
		scanf_s("%d", &pos); 
		

	funcao(pnome, unome, resposta, pos); //Chama a função 


	printf("%s\n", resposta ); //Imprime na tela o resultado das strings
	printf("%d\n", pos);


	system("pause");
	return 0;
}

	