#ifndef PILHA_H
#define	PILHA_H
#define MAX 50

struct Cliente {
	
	char nome[30];
	
	char cpf[13];
	
};

struct TPilha {
	
	Cliente cli[MAX];
	
	int qntElementos;
};

class Pilha{

	TPilha *tpilha;
	
	void criarPilha();

public:
	
	Pilha();

	int tamanhoPilha();
	
	bool vazia();

	void inserirCliente(Cliente elem);
	
	Cliente removerCliente();
	
	void removerPilha();

	void imprimirPilha();
};

#endif