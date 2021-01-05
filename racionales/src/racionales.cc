#include "racionales.h"

int MaxComDiv(int a , int b){
  if(a == 0){
    return b;
  }
  return MaxComDiv(b%a,a);
}

void Racional::Simplificar(){
  int mcd = MaxComDiv(num_,dem_);
  dem_ /= mcd;
  num_ /= mcd;
}

Racional Multiplicar(const Racional &r1 , const Racional &r2){
  Racional r3{r1.num_*r2.num_,r1.dem_*r2.dem_};
  r3.Simplificar();
  return r3;
}

Racional Dividir(const Racional &r1 , const Racional &r2){
  Racional r3{r1.num_*r2.dem_,r1.dem_*r2.num_};
  r3.Simplificar();
  return r3;
}

Racional Sumar(const Racional &r1 , const Racional &r2){
  int dem = MaxComDiv(r1.dem_,r2.dem_);
  dem = (r1.dem_*r2.dem_) / dem; //MinimoComúnMúltiplo * MáximoComúnDivisor = denominador1 * denominador2
  int num = (r1.num_) * (dem/r1.dem_) + (r2.num_) * (dem/r2.dem_);
  Racional r3{num,dem};
  r3.Simplificar();
  return r3;
}

Racional Restar(const Racional &r1 , const Racional &r2){
  int dem = MaxComDiv(r1.dem_,r2.dem_);
  dem = (r1.dem_*r2.dem_) / dem; 
  int num = (r1.num_) * (dem/r1.dem_) - (r2.num_) * (dem/r2.dem_);
  Racional r3{num,dem};
  r3.Simplificar();
  return r3;
}

void Racional::Print() const{
  std::cout<<num_<<'/'<<dem_<<std::endl;
}

std::string Comparar(const Racional &r1 , const Racional &r2){
  float x = float(r1.num_)/float(r2.dem_) , y = float(r2.num_)/float(r2.dem_);
  if (x == y){
    return "Son iguales";
  }
  else{
    return x>y ? "El primero es mayor" : "El segundo es mayor";
  }

}