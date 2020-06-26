#include<stdio.h>
#include<stdlib.h>

int main() {

	float nota1, nota2, media;  //Para números reais deve-se usar float para identificar as variáveis

	printf("Digite a primeira nota: ");
	scanf_s("%f", &nota1);  //Para identificar a variável em float deve-se usar %f
	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("A media das notas eh : %.2f\n ",  media);  // %.2f é atribuído ao número de casas depois da vírgula no resultado

	if (media > 7) {
		printf("APROVADO\n\n");
	}
	else {
		printf("REPROVADO\n\n");
	}

	system("pause");
	return 0;

}


