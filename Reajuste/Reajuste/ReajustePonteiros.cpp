#include<stdio.h>
#include<stdlib.h>

void reajuste20(float *preco, float *reajuste);

int main()
{
	float val_preco, val_reaj;

	printf("\n Insira o preco atual: ");
	scanf_s("%f", &val_preco);

	reajuste20(&val_preco, &val_reaj);

	printf("\n O preco novo eh %.2f\n", val_preco);
	printf("\n O reajuste foi de %.2f\n", val_reaj);

	system("pause");
	return 0;
}

void reajuste20(float *preco, float *reajuste)
{
	*reajuste = *preco * 0.2;
	*preco *= 1.2;

}