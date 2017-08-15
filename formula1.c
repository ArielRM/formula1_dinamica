#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *input = fopen("formula1.csv","r");
	if(input == NULL) {
		perror("Erro ao abrir \"formula1.csv\"");
		exit(EXIT_FAILURE);
	}
	fclose(input);
	return 0;
}