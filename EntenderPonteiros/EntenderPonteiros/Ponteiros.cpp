#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x = 4, y = 7;
	int* px, * py;

	printf("&x = %p\t x = %d\n", &x, x);
	printf("&y = %p\t y = %d\n", &y, y);

	px = &x;
	py = &y;

	printf("px = %p\t *px = %d\n", px, *px);
	printf("py = %p\t *py = %d\n", py, *py);

	printf("px = %p\t *px = %d\t &px = %p\n", px, *px, &px);
	printf("py = %p\t *py = %d\t &py = %p\n", py, *py, &py);
	printf("\n\n");

	//Se fosse para alterar o conte�do de px com acr�scimo de *px++
	//A variavel ponteiro dever� estar entre parenteses
	(*px)++;

	printf("*px = %d\n\n", *px);

	system("pause");
	return 0;
}