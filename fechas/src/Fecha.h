#include <iostream>
#include <string>
#include <vector>

class Fecha{
 private:
  int dia_;
  int mes_;
  int year_;
  bool bisiesto_;
 public:
  Fecha(int dia , int mes , int year);
  void CambioFecha(int numfechas);
  int Dia() const;
  int Mes() const;
  int Year() const;
  bool EsBisiesto();
};

