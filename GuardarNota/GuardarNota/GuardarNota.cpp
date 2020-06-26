#include<stdio.h>
#include<stdlib.h>

int main() {

	float nota[4];
	
	printf("Digite a primeira nota: ");
	scanf_s("%f", &nota[0]);
	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota[1]);
	printf("Digite a terceira nota: ");
	scanf_s("%f", &nota[2]);
	
	nota[3] = (nota[0] + nota[1] + nota[2]) / 3;


	if (nota[3] >= 7) {
		printf("APROVADO");
	}
	else {
		printf("REPROVADO");
	}
	printf("\n");
	printf("A media foi: %.2f\n", nota[3]);

	system("pause");
	return 0;

}