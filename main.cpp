#include "stack.h"
#include <iostream>

void PrintTop(const Stack &stack) {
  char top = Top(stack);
  if (top == '\0')
    std::cout << "Top: Pilha vazia.\n";
  else
    std::cout << "Topo da pilha: " << top << '\n';
}

void PrintPop(Stack &stack) {
  char pop = Pop(stack);
  if (pop == '\0')
    std::cout << "Pop: Pilha vazia.\n";
  else
    std::cout << "Pop retornou: " << pop << '\n';
}

int main() {
  Stack s = Create();
  PrintTop(s);

  Push(s, 'A');
  PrintTop(s);

  Push(s, 'B');
  PrintTop(s);

  Push(s, 'C');
  PrintTop(s);

  Push(s, 'D');
  PrintTop(s);

  Push(s, 'E');
  PrintTop(s);

  PrintPop(s);
  PrintTop(s);

  PrintPop(s);
  PrintTop(s);

  PrintPop(s);
  PrintTop(s);

  PrintPop(s);
  PrintTop(s);

  PrintPop(s);
  PrintTop(s);
}
