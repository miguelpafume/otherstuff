#include <iostream>

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8"); //Para conseguir escrever o programa em português (usar acentos)
  size_t input_num, fib_num, prev_num {}; //size_t é tipo de dado que consegue armazenar o maior valor inteiro positivo (mesma coisa que long long unsigned int)
  short int pos {1}; //Estou incluindo o zero na contagem
  
  std::cout << "Digite o número a ser encontrado (limitado a 1.844e19): ";
  std::cin >> input_num;

  while(fib_num < input_num) {
    fib_num += prev_num;
    prev_num = fib_num-prev_num;
    pos++;
    if(fib_num==0) {fib_num++;} //Executa só a primeira vez pq fib_num é 0
  }

  if(fib_num == input_num) {
    std::cout << "\nEUREKA! Seu número é o " << pos << "° digito da sequência de fibonacci.";
  } else {
    std::cout << "\nSeu número não está na sequencia de fibonacci. :(";
  }

  return 0;
}