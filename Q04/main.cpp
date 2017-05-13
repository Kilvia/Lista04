#include <stdio.h>
#include "Fila.h"

int main(int argc, char const *argv[]){

	Fila fila1;

	Cliente cls[] = {{"Rodrigo","902123456-71"}, {"Anny", "305234908-76"}, {"Kilvia", "109098765-13"}};

	printf("\nQuantidade de elementos na Fila %d\n", fila1.tamanhoFila());

	for (int i = 0; i < 3; i++){
	
		fila1.inserirCliente(cls[i]);
	}

	fila1.removerCliente();

	Cliente temp = {"Anny", "30523490876"};

	int ret = fila1.buscarCliente(temp);
	
	if(ret != -1) {
		
		printf("\nCliente encontrado - pos %d\n", ret);
	
	}else {
	
		printf("\nCliente nao encontrado\n");
	}

	printf("\n");

	fila1.imprimirFila();
	
	fila1.removerFila();
	
	return 0;
}
