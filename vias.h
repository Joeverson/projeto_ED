#include <stdlib.h>
#include <stdio.h>

typedef char tipo_carro; // cria um tipo de variavel chamado carro onde ficara uma string

typedef struct veiculo_h{ // esse struct é para os veiculos que viram na horizontal
	tipo_carro *car; // criando um vetor de char(string) do tipo tpo_carro
	struct veiculo_h* next; // ponteiro que aponta para frente
	struct veiculo_h* prev; // pnteiro que apnta traz
}via_h;

typedef via_h* pista_h; // ponteiro para o tipo via_h


void criar(pista_h *c){ // inicializando a lista duplamente encadeada
	*c = NULL;
}

int inserir_puro(pista_h *c, tipo_carro *veiculo){
	
	pista_h novo = (pista_h) malloc(sizeof(via_h)); // rezervando espaço na memoria para a nova estrutura
	
	if(novo == NULL) return 0;
	
	novo->car = *veiculo;
	novo->prev = NULL;
	novo->next = NULL;
	*c = novo;
	return 1;
	
}

void view(pista_h c){
	while(c->next != NULL){
		printf("%s\n",c->car);
	}
}
