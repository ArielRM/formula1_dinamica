#include <stdio.h>
#include <stdlib.h>
#include "csv.h"

void getCSVInfo(FILE *file, int *records, int *fields) {
	*records = 0;
	*fields = 0;
	char hold;
	while(fscanf(file,"%c",&hold) == 1) {
		if(hold == '\n' || hold == ';') {
			if(*records == 0)
				*fields += 1;
			if(hold == '\n')
				*records += 1;
		}
	}
	rewind(file);
}

void getCSVData(FILE *file, char **tabela) {
	
}
		