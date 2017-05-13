#ifndef FILA_H
#define	FILA_H
#define MAX 50

struct Cliente {
	
	char nome[30];
	
	char cpf[13];
};

struct TFila {

	Cliente cli[MAX];

	int qntElementos;
};

class Fila{

	TFila *tfila;
	
	void criarFila();

public:
	Fila();

	void inserirCliente(Cliente elem);
	
	int tamanhoFila();
	
	Cliente removerCliente();
	
	int buscarCliente(Cliente elem);
	
	void removerFila();
	
	void imprimirFila();
};
#endif