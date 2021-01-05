#include "Fecha.h"


Fecha::Fecha(int dia , int mes , int year){
  dia_ = dia;
  mes_ = mes;
  year_ = year;
  EsBisiesto();
}

bool Fecha::EsBisiesto(){
  bool bisiesto;
  if(year_%4==0){
    if(year_%100==0){
        if(year_%400==0){
          bisiesto = true;
        }
        else{
          bisiesto = false;
        }
    }
    else{
      bisiesto = true;
    }
  }
  else{
    bisiesto = false;
  }
  bisiesto_ = bisiesto;
  return bisiesto;
}

void Fecha::CambioFecha(int numfechas){
  for (int i{0}; i<numfechas; i++){
    dia_ += 1;
    switch (mes_){
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if (dia_ >= 32){
          dia_ = 1;
          mes_ += 1;
          if (mes_ >= 13){
            mes_ = 1;
            year_ += 1;
          }
        }
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        if (dia_ >= 31){
          dia_ = 1;
          mes_ += 1;
        }
        break;
      case 2:
        if (EsBisiesto()){
          if (dia_ >= 30){
            dia_ = 1;
            mes_ += 1;
          }
        }
        else{
          if (dia_ >= 29){
            dia_ = 1;
            mes_ += 1;
          }
        }
        break;
    }
  }
}

int Fecha::Dia() const{
  return dia_;
}

int Fecha::Mes() const{
  return mes_;
}

int Fecha::Year() const{
  return year_;
}



