#include <stdio.h>
#include "Lista.h"
#include <string.h>
#include <stdlib.h>

Lista::Lista(){
	
	tlista = (TLista*) malloc(sizeof(struct TLista));
	
	criarLista();
}

void Lista::criarLista(){
	
	tlista->qntElementos = 0;
}

void Lista::inserirCliente(Cliente  elem, int posi){
	
	int i;

	if(posi < tlista->qntElementos){
		
		for (i = (tlista->qntElementos - 1); i < posi; i--){
			
			tlista->cli[i + 1] = tlista->cli[i];
		}		
	}	

	tlista->cli[posi] = elem;

	tlista->qntElementos += 1;

}

int Lista::tamanhoLista(){
	
	return tlista->qntElementos;
}


Cliente Lista::removerCliente(int posi){

	int i;

	Cliente aux = tlista->cli[posi];

	if(posi < tlista->qntElementos){
		
		for (i = posi; i < tlista->qntElementos; i++){

			tlista->cli[i] = tlista->cli[i + 1];
		}		
	}	

	tlista->qntElementos -= 1;

	return aux; 
}	

int Lista::buscarCliente(Cliente elem){

	int i;

	for(i = 0 ; i < tlista->qntElementos ; i++){

		if((strcmp(elem.nome, tlista->cli[i].nome) == 0)
			&& (elem.cpf == tlista->cli[i].cpf)){

			return i;
		}
	}

	return -1;
}

void Lista::removerLista(){

	free(tlista);
}


void Lista::imprimirLista(){

	int i;

	printf("\t\t\t\tElementos da Lista\n");
	
	for (i = 0; i < tlista->qntElementos; i++){

		printf("╔");
        
        for (int j = 0; j < 115; ++j)
        
            printf("═");     
    
    	printf("╗\n");
       
    	printf("║");
   
		printf("Cliente: %s",tlista->cli[i].nome);
        
    	printf("    \t\t\t\t\t\t\t\t\t\t\t\t    ║\n");
   
    	printf("╠");
 
    	for (int j = 0; j < 115; ++j)
            
            printf("═");
   
    	printf("╣\n");
   
       	printf("║");
	
		printf("CPF: %s",tlista->cli[i].cpf);
         
    	printf("    \t\t\t\t\t\t\t\t\t\t\t\t    ║\n");
    
    	printf("╚");
    
        for (int j = 0; j < 115; ++j)
    
            printf("═"); 
 
    	printf("╝\n");
	}
}
