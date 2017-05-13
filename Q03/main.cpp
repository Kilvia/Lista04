#include <stdio.h>
#include "Pilha.h"

int main(int argc, char const *argv[])
{
	Pilha pilha1;

	Cliente cls[] = {{"Rodrigo","902123456-71"}, {"Beatriz", "305234908-76"}, {"Kilvia", "109098765-13"}};

	for (int i = 0; i < 4; i++){
		
		pilha1.inserirCliente(cls[i]);
	}

	pilha1.removerCliente();

	pilha1.imprimirPilha();
	
	pilha1.removerPilha();
	
	return 0;
}

