#include <stdlib.h>
#include <stdio.h>

typedef int Tdado; // cria um tipo de variavel chamado carro onde ficara uma string

typedef struct veiculo_h{ // esse struct é para os veiculos que viram na horizontal
	Tdado car; // criando um vetor de char(string) do tipo tpo_carro
	struct veiculo_h* next; // ponteiro que aponta para frente
	struct veiculo_h* prev; // pnteiro que apnta traz
}via_h;

typedef via_h* pista_h; // ponteiro para o tipo via_h


void criar(pista_h *c){ // inicializando a lista duplamente encadeada
	*c = NULL;
}

int inserir_puro(pista_h *c, Tdado num){
	
	pista_h novo = (pista_h) malloc(sizeof(via_h)); // rezervando espaço na memoria para a nova estrutura
	
	if(novo == NULL) return 0;
	
	novo->car = num;
	novo->prev = NULL;
	novo->next = NULL;
	*c = novo;
	return 1;
	
}

void view(pista_h c){ // visualizar a lista
	while(c!=NULL){
		printf("%s\n\n",c->car);
		c = c->next;
	}
}
void main(){

	criar(&via_h);
	view(via_h);
}
