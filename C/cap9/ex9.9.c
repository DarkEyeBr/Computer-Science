// Feito por Guilherme Rosseti
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter( char *destino, const char *origem );

int main() {
	char string[40];
	char inversa[40] = "carai";

	printf("String: ");
	fgets(string, 40, stdin);
	string[strlen(string)-1] = '\0';

	inverter(inversa, string);

	printf("Invertida: ", inversa);
	

	return 0;
}

void inverter( char *destino, const char *origem ) {
	int j = strlen(origem);
	for (int i = 0; i < strlen(origem); i++) {
		printf("|%d, %d", i, j);
		
		printf("=%s", destino);
		destino[i] = origem[j];
		j--;


	}
		destino[strlen(destino)] = '\0';
}