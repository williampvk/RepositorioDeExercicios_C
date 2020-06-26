#include <stdio.h>
#include <stdlib.h>

struct aponta {
	int x;
	int y;
	int z;
	int r;//criada para resultados de calculos
}; struct aponta numero, *pontNum;

int main() {
	pontNum = &numero;

	/*
	(*pontNum).x = 15;
	(*pontNum).y = 17;
	(*pontNum).z = 20;

	//Também pode ser representado assim

	pontNum->x = 15;
	pontNum->y = 17;
	pontNum->z = 20;
	*/

	//Para pedir ao usuario para entrar com os valores

	printf("Digite o valor de x: ");
	scanf_s("%d", &numero.x);
	printf("Digite o valor de y: ");
	scanf_s("%d", &numero.y);;
	printf("Digite o valor de z: ");
	scanf_s("%d", &numero.z);

	//Para usar estes dados em calculos

	numero.r = (numero.x) + (numero.y) + (numero.z);

	printf("X:%d\n", numero.x);
	printf("Y:%d\n", numero.y);
	printf("Z:%d\n\n\n", numero.z);

	printf("A soma dos valores eh: %d\n\n", numero.r);

	system("pause");
	return 0;

}
