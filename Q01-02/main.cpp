#include <stdio.h>
#include "Lista.h"

int main(int argc, char const *argv[]){
	
	Lista lista1;

	Cliente cls[] = {{"Rodrigo","902123456-71"}, {"Anny", "305234908-76"}, {"Kilvia", "109098765-13"}};
	
	for (int i = 0; i < 3; i++){

		lista1.inserirCliente(cls[i],i);
	}

	lista1.removerCliente(1);

	Cliente temp = {"Anny", "305234908-76"};

	int ret = lista1.buscarCliente(temp);
	
	if(ret != -1) {
	
		printf("\nCliente encontrado - pos %d\n", ret);
	
	}else {
	
		printf("\nCliente nao encontrado\n");
	}
	printf("\n");

	lista1.imprimirLista();

	lista1.removerLista();
	
	return 0;
}

