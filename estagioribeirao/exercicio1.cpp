#include <iostream>

int main() {
  int indice {13};
  int soma {0};

  for(int k {0}; k < indice; k++) {
    soma += k;
  }

  std::cout << "Resultado final: " << soma; 

  return 0;
}