#include <stdio.h>
#include "pilha.h"

int main(){
	t_dado dado;
	pilha p;
	stack_init(&p);
	int op=0;
	while(1){
		printf("\nESCOLHA UMA OPÇAO\n1-PUSH\n2-POP\n3-TOP\n4-EMPTY\n5-FULL\n6-PRINTAR\n7-DELIMITADOR\n0-SAIR\n\n");
		scanf(" %d",&op);
			
		switch(op){
			case 0:
				return 0;
			case 1:
				printf("\nINSERIR DADO: ");
				scanf("%d",&dado);
				if(push(&p,dado)) printf("\nINSERIDO COM SUCESSO\n");
				else printf("\nERRO AO INSERIR\n");
				break;
			case 2:
				if(pop(&p,&dado)) printf("\nDADO POPADO, DADO: %d\n",dado);
				else printf("\nERRO AO POPAR DADO\n");
				break;
			case 3:
				printf("\nDADO DO TOPO: %d\n",top(p));
				break;
			case 4:
				if(stack_isempty(p)) printf("\nVAZIO\n");
				else printf("\nNAO VAZIO\n");
				break;
			case 5:
				if(stack_isfull(p)) printf("\nCHEIA\n");
				else printf("\nNAO CHEIA\n");
				break;
			case 6:
				printar(p);
				break;
			default:
				printf("OPERAÇAO INVALIDA\n");
			
		}
	
	
	};
	return 0;

}
