#include<stdio.h>
#include<stdlib.h>

int main() {

	float nota1, nota2, media;  //Para n�meros reais deve-se usar float para identificar as vari�veis

	printf("Digite a primeira nota: ");
	scanf_s("%f", &nota1);  //Para identificar a vari�vel em float deve-se usar %f
	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("A media das notas eh : %.2f\n ",  media);  // %.2f � atribu�do ao n�mero de casas depois da v�rgula no resultado

	if (media > 7) {
		printf("APROVADO\n\n");
	}
	else {
		printf("REPROVADO\n\n");
	}

	system("pause");
	return 0;

}


