#ifndef _LISTA_H
#define _LISTA_H
#define MAXTAM 20

#include <stdbool.h>

typedef char t_dado;
typedef struct {
	t_dado itens[MAXTAM];
	int topo;
} pilha;

void stack_init(pilha *);
bool push(pilha *, t_dado);
bool pop(pilha *, t_dado *);
t_dado top(pilha);
bool stack_isempty(pilha);
bool stack_isfull(pilha);
void printar(pilha);


#endif
