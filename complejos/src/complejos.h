#ifndef COMPLEJOS
#define COMPLEJOS
#include <iostream>

class Complejo{
 private:
  int real_;
  int im_;
 public:
  Complejo(int x,int y): real_{x} , im_{y} {}
  friend Complejo Add(Complejo a,Complejo b);
  friend Complejo Subs(Complejo a,Complejo b);
  void Print(){
    std::cout<<real_<<" "<<im_<<"i"<<std::endl;
  }
};

#endif