#include <stdio.h>

int main() {
  char texto[50];

  scanf("%49s", texto);

  for (int i = 0; texto[i] != '\0'; i++) {
    if (texto[i] == '-' || texto[i] == '_') {
      continue;
    }

    // Se for letra maiúscula, espelha no alfabeto:
    if (texto[i] >= 'A' && texto[i] <= 'Z') {
      texto[i] = 'Z' - (texto[i] - 'A');
    }

    // Se for letra minúscula, espelha no alfabeto:
    else if (texto[i] >= 'a' && texto[i] <= 'z') {
      texto[i] = 'z' - (texto[i] - 'a');
    }
  }

  printf("%s\n", texto);
}