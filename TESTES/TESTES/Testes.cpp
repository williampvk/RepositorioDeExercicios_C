#include<stdio.h>
#include<stdlib.h>

int main() {

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
			printf("\nO valor de ASCII de %c eh %d", ch, ch);

	printf("\n");

	system("pause");
	return 0;

}