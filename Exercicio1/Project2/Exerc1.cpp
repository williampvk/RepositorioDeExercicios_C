#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N1, N2;

	printf("Digite o primeiro numero: ");
	scanf_s("%d", &N1);
	printf("Digite o segundo numero: ");
	scanf_s("%d", &N2);


	if(N1 > N2){
		printf("\n A variavel N1 eh maior que a variavel N2 \n\n");
	}
	else{
		printf("\n A variavel N1 eh menor que a variavel N2 \n\n");
	}


	printf("Os numeros digitados sao: %d & %d\n", N1, N2);


	system("pause");
	return 0;

}