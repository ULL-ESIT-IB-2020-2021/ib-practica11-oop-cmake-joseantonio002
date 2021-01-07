#include "fecha_.h"
#include <cstdlib>
#include <iostream>

void ComprobacionParametros(int argc , char* argv[]){
  if (argc != 4){
    std::cout<<argv[0]<<" gestión de fechas"<<std::endl<<"Modo de uso: "<<argv[0]
    <<" dd/mm/aaaa N(número de fechas posteriores) fichero_salida.txt"<<std::endl;
    exit(EXIT_FAILURE);
  }
}

std::vector<int> ObtenerFechas(std::string &fecha){
  fecha += '/';
  std::vector<int> numeros;
  std::string resultado{""};
  int n;
  for (const char t : fecha){
    if (t == '/'){
      n = std::stoi(resultado);
      numeros.emplace_back(n);
      resultado.erase(resultado.begin(),resultado.end());
    }
    else{
      resultado += t;
    }
  }
  fecha.pop_back();
  return numeros;
}

