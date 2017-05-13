#include <stdio.h>
#include "Pilha.h"
#include <string.h>
#include <stdlib.h>

Pilha::Pilha(){
	
	tpilha = (TPilha*) malloc(sizeof(struct TPilha));
	
	criarPilha();
}

void Pilha::criarPilha(){
	
	tpilha->qntElementos = 0;
}

int Pilha::tamanhoPilha(){
	
	return tpilha->qntElementos;
}

bool Pilha::vazia(){
	
	if(tamanhoPilha() == 0)
	
		return false;
	
	return true;
}

void Pilha::inserirCliente(Cliente elem){
	
	tpilha->cli[tamanhoPilha()] = elem;
	
	tpilha->qntElementos += 1;
}

Cliente Pilha::removerCliente(){
	
	Cliente aux = tpilha->cli[tamanhoPilha() - 1];
	
	tpilha->qntElementos -= 1;

	return aux; 
}

void Pilha::removerPilha(){
	
	free(tpilha);
}

void Pilha::imprimirPilha(){

	int i;

	printf("\t\t\t\tElementos da Fila\n");
	
	for (i = 0; i < tpilha->qntElementos; i++){

		printf("╔");
        
        for (int j = 0; j < 80; ++j)
        
            printf("═");     
    
    	printf("╗\n");
       
    	printf("║");
   
		printf("\tCliente\t: %s",tpilha->cli[i].nome);
        
    	printf(" \t\t\t\t\t\t\t ║\n");
   
    	printf("╠");
 
    	for (int j = 0; j < 80; ++j)
            
            printf("═");
   
    	printf("╣\n");
   
       	printf("║");
	
		printf("\tCPF\t: %s",tpilha->cli[i].cpf);
         
    	printf(" \t\t\t\t\t\t\t ║\n");
    
    	printf("╚");
    
        for (int j = 0; j < 80; ++j)
    
            printf("═"); 
 
    	printf("╝\n");
	}
}