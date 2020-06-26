#include<stdio.h>
#include<stdlib.h>

#define maior(x,y) x>y?x:y

int main(){
	int a = 32;
	int b = 58;
	int c = maior(a, b);

	printf("Maior valor = %d\n\n", c);

	system("pause");
	return 0;

}