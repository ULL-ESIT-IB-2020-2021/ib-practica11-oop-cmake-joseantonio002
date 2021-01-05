#include "Fecha.h"
#include "fecha_.h"
#include <fstream>
#include <sstream>
int main(int argc , char* argv[]){
  ComprobacionParametros(argc , argv);
  std::string fechas = argv[1] , cambios = argv[2] , filename = argv[3];
  int numcambios{std::stoi(cambios)};
  std::ofstream file(filename);
  std::vector<int> numeros = ObtenerFechas(fechas);
  Fecha fecha{numeros[0],numeros[1],numeros[2]};
  fecha.CambioFecha(numcambios);
  std::string resultado;
  std::stringstream oss;
  oss << fecha.Dia() <<"/"<<fecha.Mes()<<"/"<<fecha.Year();
  oss >> resultado;
  file << resultado;
  return 0;
}