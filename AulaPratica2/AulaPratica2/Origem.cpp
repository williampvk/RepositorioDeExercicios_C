#include <stdio.h>
#include <stdlib.h>

int imprimeN(int inicio, int sfim);

int main()
{
	int comeco, sfim, i;

	comeco = 1;
	sfim = 21;

	printf("Funcao recursiva\n");
	imprimeN(comeco, sfim);

	printf("\n\n");

	printf("Funcao iterativa FOR\n");
	for (i = comeco; i < sfim; i++){
		printf("%d", i);
	}

	printf("\n\n");

	printf("Funcao iterativa WHILE\n");
	while (comeco < sfim)
	{
		printf("%d", comeco);
		comeco++;
	}

	printf("\n\n");

	system("pause");
	return 0;

}

int imprimeN(int comeco, int sfim)
{
	if (comeco < sfim)
	{
		printf("%d", comeco);
		imprimeN(comeco + 1, sfim);
	}
}



