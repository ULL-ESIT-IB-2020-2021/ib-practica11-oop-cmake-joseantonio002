#include "complejos.h"

int main(){

  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado = Add(complejo1, complejo2);
  resultado.Print();
  resultado = Subs(complejo1, complejo2);
  resultado.Print();
  return 0;
}