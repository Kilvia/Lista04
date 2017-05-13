#include <stdio.h>
#include "Fila.h"
#include <string.h>
#include <stdlib.h>
#include <locale.h>

Fila::Fila(){
	
	tfila = (TFila*) malloc(sizeof(struct TFila));
	
	criarFila();
}

void Fila::criarFila(){
	
	tfila->qntElementos = 0;
}

void Fila::inserirCliente(Cliente elem){

	tfila->cli[tfila->qntElementos] = elem;
	
	tfila->qntElementos += 1;
}

int Fila::tamanhoFila(){

	return tfila->qntElementos;
}


Cliente Fila::removerCliente(){

	int i;

	Cliente aux;

	aux = tfila->cli[0];
			
				
	for (i = 0 ; i < tfila->qntElementos ; i++){

					
		tfila->cli[i] = tfila->cli[i+1];
	}
					
	tfila->qntElementos -= 1;

	return aux; 
}	

int Fila::buscarCliente(Cliente elem){

	int i;

	for(i = 0 ; i < tfila->qntElementos ; i++){

		if((strcmp(elem.nome, tfila->cli[i].nome) == 0)
			&& (elem.cpf == tfila->cli[i].cpf)){

			return i;
		}
	}

	return -1;
}

void Fila::removerFila(){

	free(tfila);
}

void Fila::imprimirFila(){

	int i;

	printf("\t\t\t\tElementos da Fila\n");
	
	for (i = 0; i < tfila->qntElementos; i++){

		printf("╔");
        
        for (int j = 0; j < 79; ++j)
        
            printf("═");     
    
    	printf("╗\n");
       
    	printf("║");
   
		printf("\tCliente: %s",tfila->cli[i].nome);
        
    	printf("\t\t\t\t\t\t\t\t║\n");
   
    	printf("╠");
 
    	for (int j = 0; j < 79; ++j)
            
            printf("═");
   
    	printf("╣\n");
   
       	printf("║");
	
		printf("\tCPF: %s",tfila->cli[i].cpf);
         
    	printf("\t\t\t\t\t\t\t║\n");
    
    	printf("╚");
    
        for (int j = 0; j < 79; ++j)
    
            printf("═"); 
 
    	printf("╝\n");
	}
}