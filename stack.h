#ifndef __STACK_H__
#define __STACK_H__

const int STACK_CAPACITY = 4;

struct Stack
{
	int count;
	char elements[STACK_CAPACITY]; // Nossa pilha armazena valores do tipo char.
};

Stack Create();

// Insere o elemento e no topo da pilha stack, se a pilha não estiver cheia.
bool Push(Stack& stack, char e);

// Remove e retorna o elemento do topo da pilha stack, se a pilha não estiver vazia.
char Pop(Stack& stack);

// Retorna o elemento do topo da pilha stack, se a pilha não estiver vazia.
char Top(const Stack& stack);

#endif