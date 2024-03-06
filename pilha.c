#include "pilha.h"
#include <stdio.h>
#include <stdbool.h>


void stack_init(pilha *p){
	p->topo = 0;
}

bool push(pilha *p, t_dado dado){
	if  (p->topo >= MAXTAM) return false;
	p->itens[p->topo++] = dado;
	return true;
}
bool pop(pilha *p, t_dado *dado){
	if (p->topo == 0) return false;
	*dado = top(*p);
	p->topo--;
	return true;
}

t_dado top(pilha p){
	if (p.topo == 0) return false;
	return (p.itens[p.topo-1]);
}
bool stack_isempty(pilha p){
	return p.topo == 0;
}
bool stack_isfull(pilha p){
	return p.topo == MAXTAM;
}

void printar(pilha p){
	int i;
	for(i=p.topo-1;i>=0;i--) printf("\n%d",p.itens[i]);
}

