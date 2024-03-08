#include <iostream> 

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  //Soma 2
  std::cout << "Sequência 1: ";
  for(int i {1}; i < 50; i += 2) {
    std::cout << i << " ";
  }
  
  //Multiplica por 2
  std::cout << "\nSequência 2: ";
  for(int i {2}; i < 200; i *= 2) {
    std::cout << i << " ";
  }

  //Eleva o numero ao quadrado
  std::cout << "\nSequência 3: ";
  for(int i {0}; i < 10; i++) {
    std::cout << i*i << " ";
  }

  //Eleva o numero ao quadrado e multiplica por 4
  std::cout << "\nSequência 4: ";
  for(int i {0}; i < 10; i++) {
    std::cout << 4*(i*i) << " ";
  }

  //Sequência de fibonacci
  std::cout << "\nSequência 5: ";
  size_t fib_num {0};
  size_t prev_num {0};
  while(fib_num < 1000) {
    fib_num += prev_num;
    prev_num = fib_num-prev_num;
    std::cout << fib_num << " ";
    if(fib_num==0) {fib_num=1;}
  }
  
  //Sequencia 6 são os números que por extenso começam com "D"

  return 0;
}