#include "DuCD.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Presione ENTER para abrir CD");
	getchar();
	printf("\nAbriendo CD...");
    abreCD();

	printf("\n\nPresione ENTER para cerrar CD");
	getchar();
	printf("\nCerrando CD...\n\n");
    cierraCD();

	system("PAUSE");

	return 0;
}


