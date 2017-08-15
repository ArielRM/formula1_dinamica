#include <stdio.h>
#include <stdlib.h>
#include "csv.h"

int main() {
	FILE *input = fopen("formula1.csv","r");
	if(input == NULL) {
		perror("Erro ao abrir \"formula1.csv\"");
		exit(EXIT_FAILURE);
	}
	
	int records,fields;
	
	getCSVInfo(input, &records, &fields);
	
	char *tabela[fields][records];
	
	
	
	
	fclose(input);
	return 0;
}