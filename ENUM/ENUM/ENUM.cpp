#include <stdio.h>
#include <stdlib.h>

enum semana {domingo = 1 , segunda, terca, quarta, quinta, sexta, sabado};

int main() {

	enum semana a, b, c, d, e, f, g;

	a = domingo;
	b = segunda;
	c = terca;
	d = quarta;
	e = quinta;
	f = sexta;
	g = sabado;
	
	printf("Dias da semana\n\n");

	printf("Identificador de domingo = %d\n", a);
	printf("Identificador de segunda = %d\n", b);
	printf("Identificador de terca = %d\n", c);
	printf("Identificador de quarta = %d\n", d);
	printf("Identificador de quinta = %d\n", e);
	printf("Identificador de sexta = %d\n", f);
	printf("Identificador de sabado = %d\n", g);

	

	system("pause");
	return 0;
}