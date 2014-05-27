#include <alloc.h>

typedef char tipo_carro; // cria um tipo de variavel chamado carro onde ficara uma string

typedef struct veiculo_h{ // esse struct é para os veiculos que viram na horizontal
	tipo_carro car[30]; // criando um vetor de char(string) do tipo tpo_carro
	struct veiculo *next; // ponteiro que aponta para frente
	struct veiculo *prev; // pnteiro que apnta traz
}via_h;

typedef *via_h pista_h;
