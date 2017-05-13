#ifndef LISTA_H
#define LISTA_H
#define MAX 50

struct Cliente {
	
	char nome[30];
	
	char cpf[13];
	
};

struct TLista {
	
	Cliente cli[MAX];
	
	int qntElementos;
};

class Lista{

	TLista *tlista;
	
	void criarLista();

public:
	Lista();

	void inserirCliente(Cliente elem, int posi);
	
	int tamanhoLista();
	
	Cliente removerCliente(int posi);
	
	int buscarCliente(Cliente elem);
	
	void removerLista();
	
	void imprimirLista();
};

#endif