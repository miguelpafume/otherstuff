#include <iostream>
#include <string> 

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  std::string normal_string, inverted_string {};

  std::cout << "Digite o texto que será invertido:\n> ";
  //Uso do getline é para ele também considerar espaços
  getline(std::cin, normal_string);

  //Estou contando de maneira decrescente do valor do último caracter até o primeiro, e adicionando em outra string
  for(int i {static_cast<int>(normal_string.size())-1}; i >= 0 ; i--) { //static_cast só para o compilador não dar um aviso de conversão
    inverted_string.push_back(normal_string[i]);
  }

  std::cout << "\nO texto invertido ficou:\n> " << inverted_string;

  return 0;
}