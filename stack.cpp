#include "stack.h"

Stack Create()
{
	Stack stack;
	stack.count = 0;
	for (int i = 0; i < STACK_CAPACITY; ++i)
	{
		stack.elements[i] = '\0';
	}
	return stack;
}

bool Push(Stack& stack, char e)
{
	// Verifica se a pilha está cheia.
	if (stack.count == STACK_CAPACITY)
		return false;
	
	// Pilha não está cheia, insere elemento e na pilha stack.
	stack.elements[stack.count] = e;
	++stack.count;
	return true;
}

char Pop(Stack& stack)
{
	// Verifica se a pilha está vazia.
	if (stack.count == 0)
		return '\0';
	
	--stack.count;
	char value = stack.elements[stack.count];
	stack.elements[stack.count] = '\0';

	return value;
}

char Top(const Stack& stack)
{
	// Verifica se a pilha está vazia.
	if (stack.count == 0)
		return '\0';
	
	return stack.elements[stack.count - 1];
}
