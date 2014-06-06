#define MAX 10;

#include <alloc.c>

typedef int tCar;

typedef struct veiculo{ // struct de celulas de veiculos
	tCar car_cod;
	struct veiculo* next;
}car;

typedef struct{ // struct para a localização do primeiro e inicio
	car* init;
	car* finish;
}fila;




void new(fila *p){
	p -> init = p -> finish = NULL; 
}

int empty(fila p){
	return ((p.init == NULL) && (p.finish == NULL));	
}

int add(fila *p, tCar value){
	
	car *new; 

	new = (*car) malloc (sizeof(car)); //criando noca celula de carro
	if(new == NULL) return 0;

	if(empty(p)){ // caso a lista esteja vazia ela vai colocar na primeira posição
		p->init = new;
		p->finish = new;
		return 1;
	}

	p -> finish -> next = new; // apontando para a nova struct alocada
	p -> finish = new; 
	return 1;

}

int remove(fila *p){
	car *del = p->init; // copiar o endereço para dar free depois (limpando memória);
	p->init = p->init->next; // apontando o inicio para a proxima celula de carro.
	
	free(*del); /// cleaning
}