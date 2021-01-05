#ifndef RACIONALES
#define RACIONALES
#include <fstream>
#include <string>
#include <iostream>

class Racional{
 private:
  int num_;
  int dem_;
 public:
  Racional(): num_{1} , dem_{1} {} 
  Racional(int x,int y){
    if (y == 0){
      std::cout<<"Denominador no válido, sustituido por valor 1"<<std::endl;
      y = 1;
    }
    num_ = x;
    dem_ = y;
  }
  void Print() const;
  void Simplificar();
  void set_num(int n){ num_ = n;}
  void set_dem(int n){ dem_ = n;}
  int num() const {return num_;}
  int dem() const {return dem_;}
  friend Racional Sumar(const Racional &r1 , const Racional &r2);
  friend Racional Restar(const Racional &r1 , const Racional &r2);
  friend Racional Multiplicar(const Racional &r1 , const Racional &r2);
  friend Racional Dividir(const Racional &r1 , const Racional &r2);
  friend std::string Comparar(const Racional &r1 , const Racional &r2);

  
};

int MaxComDiv(int a , int b);

#endif 